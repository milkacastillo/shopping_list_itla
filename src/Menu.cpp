#include <iostream>
#include <stdlib.h>

using namespace std;

void start menu();
void listArticles();
void intoArticles();
void suprArticle();

int main()
{
  startMenu();
}

void menuBegging()
{
    int option;
    cout << "\n1- ListArticle \n";
    cout << "2- IntrArticle \n";
    cout << "3- SuprArticle\n";
    cout << "4- Exit\n";
    cout << "Option select =>\n";
    cin>>option;
    cout<<"\n";

    switch(option)
    {
    case 1:
            cout<<"Case1\n";
            listArticles();
            break;
    case 2:
            cout<<"Case2\n";
            intoArticles();
            break;
    case 3:
            cout<<"Case3\n";
            suprArticles();

            break;
    case 4:
            cout<<"Exit s\n";
            exit(0);
            break;
    default:
            cout<<"opcion incorrect";
            start menu();
    }
}

void listArticle()
{
    cout<<"ListArticle\n";
    Start Menu();
}

void intoArticles()
{
     cout<<"IntoArticles\n";
     menuPrincipal();
}

void SuprArticle()
{
     cout<<"SupriArticle\n";
     StartMenu();
}