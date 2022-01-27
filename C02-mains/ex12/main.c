
void *ft_print_memory(void *addr, unsigned int size);

int main()
{
	char string[] = "1234567890asdfghjklo";
	string[20] = '\0';
	void *punt;
	void *punt2;

	punt = &string[0];

	ft_print_memory(punt, 16);
}

