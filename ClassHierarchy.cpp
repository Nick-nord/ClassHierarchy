// ClassHierarchy.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include"Figure.h"
#include"Triangle.h"
#include"Quadrilateral.h"

int main() {

	DynemicLibrary::Figure figure;
	DynemicLibrary::Figure* p;
	p = &figure;
	p->print_info();

	DynemicLibrary::Triangle triangle(10, 20, 30, 50, 60, 70);
	triangle.setNameTriangle();
	p = &triangle;
	p->print_info();

	DynemicLibrary::Triangle triangle1(10, 20, 30, 50, 60, 90);
	triangle1.setNameTriangle();
	p = &triangle1;
	p->print_info();

	DynemicLibrary::Triangle triangle2(10, 20, 30, 50, 40, 90);
	triangle2.setNameTriangle();
	p = &triangle2;
	p->print_info();

	DynemicLibrary::Triangle triangle3(10, 20, 10, 50, 60, 50);
	triangle3.setNameTriangle();
	p = &triangle3;
	p->print_info();

	DynemicLibrary::Triangle triangle4(30, 30, 30, 60, 60, 60);
	triangle4.setNameTriangle();
	p = &triangle4;
	p->print_info();

	DynemicLibrary::Quadrilateral quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	quadrilateral1.setNameQuadrilateral();
	p = &quadrilateral1;
	p->print_info();

	DynemicLibrary::Quadrilateral quadrilateral2(10, 20, 10, 20, 90, 90, 90, 90);
	quadrilateral2.setNameQuadrilateral();
	p = &quadrilateral2;
	p->print_info();

	DynemicLibrary::Quadrilateral quadrilateral3(20, 20, 20, 20, 90, 90, 90, 90);
	quadrilateral3.setNameQuadrilateral();
	p = &quadrilateral3;
	p->print_info();

	DynemicLibrary::Quadrilateral quadrilateral4(20, 30, 20, 30, 30, 40, 30, 40);
	quadrilateral4.setNameQuadrilateral();
	p = &quadrilateral4;
	p->print_info();

	DynemicLibrary::Quadrilateral quadrilateral5(30, 30, 30, 30, 30, 40, 30, 40);
	quadrilateral5.setNameQuadrilateral();
	p = &quadrilateral5;
	p->print_info();

	return EXIT_SUCCESS;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
