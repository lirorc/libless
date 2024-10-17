void _start ()
{
	asm(
			"call main\n"

			"mov %eax,  %edi\n"
			"mov $0x3c, %eax\n"
			"syscall\n");
}

void putn (char* string, unsigned size)
{
	asm(
			"mov %esi, %edx\n"
			"mov %edi, %esi\n"

			"mov $0x1, %eax\n" // sys_write
			"mov $0x1, %edi\n" // stdout
			"syscall\n");
}

int main ()
{
	putn("Hello, World!\n", 14);
	return -1;
}

