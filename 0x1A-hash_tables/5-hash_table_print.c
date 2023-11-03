#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int test = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (test == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = (ht->array[i])->next;
			test = 1;
		}
	}
	printf("}\n");
}
