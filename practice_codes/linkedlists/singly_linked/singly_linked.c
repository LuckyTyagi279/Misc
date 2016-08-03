#include <stdio.h>
#include <stdlib.h>

struct singly_linked
{
	int value;
	struct singly_linked *next;
};

struct singly_linked *temp;

void create_list_elements( struct singly_linked *, int );
void read_one_element( struct singly_linked *, int);
void read_list_elements( struct singly_linked *);
void free_all( struct singly_linked *);

int main()
{
	struct singly_linked *first;
	int num_of_elements, option, element_no;

	first = (struct singly_linked *)malloc(sizeof(struct singly_linked));

	if ( first == NULL )
	{
		printf("ERROR! Unable to allocate memory.\n");
		exit(1);
	}

	printf("Enter the number of elements in the linked list : ");
	scanf("%d", &num_of_elements);

	create_list_elements( first, num_of_elements );

	printf("-----------------\n");
	printf("1. READ ALL\n");
	printf("2. READ ONE\n");

	printf("Select an option[1-2] : ");
	scanf("%d", &option);

	switch( option )
	{
		case 1 :
			printf("\n******* READ *******\n");
			read_list_elements( first );
		break ;

		case 2 :
			printf("Which element to read : ");
			scanf("%d", &element_no);

			if (( element_no > num_of_elements ) || ( element_no < 1 ))
			{
				printf("ERROR! Invalid input.\n");
				exit(1);
			}

			read_one_element( first, element_no-1);
		break;

		default :
			printf("\n ERROR! Invalid Option.\n");
			exit(1);
	}

	free_all(first);

	exit(0);
}

void create_list_elements( struct singly_linked *first, int num_of_elements)
{
	struct singly_linked *next;
	int i=0, value=1;

	temp = first ;

	for ( ; i < num_of_elements-1 ; ++i)
	{
		temp->value = value;
		next = (struct singly_linked *)malloc(sizeof(struct singly_linked));

		if ( next == NULL )
		{
			printf("ERROR! Unable to allocate memory for element number %d.\n",i+1);
			continue;
		}

		temp->next = next;
		temp = next ;
		temp->next = NULL ;
		++value;
	}

	temp->value = value;
}

void read_list_elements( struct singly_linked *first )
{
	int i=1;
	temp = first;

	do
	{
		printf(" * Element #%d *\n", i);
		printf("   Value : %d\n\n", temp->value );

		temp = temp->next;
		++i;
	}	while( temp != NULL );
}

void read_one_element( struct singly_linked *first, int element_no )
{
	temp = first;

	while( element_no > 0 )
	{
		temp = temp->next;
		--element_no;
	}

	printf(" * Value : %d\n", temp->value);
}

void free_all( struct singly_linked *first)
{
	while( first->next != NULL ) 
	{
		temp = first ;
		first = temp->next ;
	
		free(temp);
	}

	free(first);
}
