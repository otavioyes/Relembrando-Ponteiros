#include <iostream>

//Iniciando novos estudos
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");

	int arr[5]{ 1, 2, 3, 4, 5 };

	int* ptr = arr;

	std::cout << "Posi��o na mem�ria de arr[5] " << &arr << '\n';
	std::cout << "Oque esta dentro de arr[5] " << arr << '\n';


	std::cout << "Posi��o na RAM de ptr " << &ptr[5] << sizeof(arr) << '\n';
	std::cout << "\n Tamanho da varivel arr[5] " << sizeof(arr) << '\n';

	for (int i = 0; i < 5; i++) {
		std::cout << "\t\tTamanho de cada posi��o do array " << sizeof(ptr[5]) << " Bytes" << '\n';
	}

	std::cout << "Onde *ptr est� localizado na mem�ria? " << &ptr << '\n';
	std::cout << "Verificando oque imprime dento de ptr: " << ptr << '\n';
}