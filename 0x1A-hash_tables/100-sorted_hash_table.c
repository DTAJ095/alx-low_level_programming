#include "hash_tables.h"
/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table;
	unsigned long int i;

	sh_table = malloc(sizeof(shash_table_t));
	if (sh_table == NULL)
		return (NULL);
	sh_table->size = size;
	sh_table->shead = NULL;
	sh_table->stail = NULL;
	sh_table->array = malloc(sizeof(shash_node_t) * size);
	if (sh_table == NULL)
	{
		free(sh_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		sh_table->array[i] = NULL;
	}
	return (sh_table);
}

/**
 * create_shash_node - create node for the sorted hash table
 * @key: the key
 * @value: the value of the node
 *
 * Return: pointer to the new node
 */
shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *sh_node;

	sh_node = malloc(sizeof(shash_node_t));
	if (sh_node == NULL)
		return (NULL);
	sh_node->key = strdup(key);
	if (sh_node->key == NULL)
	{
		free(sh_node);
		return (NULL);
	}
	sh_node->value = strdup(value);
	if (sh_node->value == NULL)
	{
		free(sh_node->key);
		free(sh_node);
		return (NULL);
	}
	sh_node->next = sh_node->sprev = NULL;
	return (sh_node);
}

/**
 * add_to_sorted_list - add node in a sorted order
 * in alinked list
 * @table: the hash table
 * @node: the node to be added
 *
 * Return: Void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (table->shead == NULL || table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	temp = table->shead;
	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - adds element to the sorted hash table
 * @ht: the hash table
 * @key: the key
 * @value: the vlaue to add
 *
 * Return: 1 on success or 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *sh_node, *temp;
	unsigned long int idx;
	char *new_val;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			free(temp->value);
			temp->value = new_val;
			return (1);
		}
		temp = temp->next;
	}
	sh_node = create_shash_node(key, value);
	if (sh_node == NULL)
		return (0);
	sh_node->next = ht->array[idx];
	ht->array[idx] = sh_node;
	add_to_sorted_list(ht, sh_node);
	return (1);
}

/**
 * shash_table_get - retrieves a value from the hash table
 * @ht: hash table
 * @key: the key of the data
 *
 * Return: the value associated to the key, or NULL on failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		flag = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}
