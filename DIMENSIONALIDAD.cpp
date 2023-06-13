//////////https://replit.com/@Carlos_Gabriel1/eda12#main.cpp 
//////////REPLIT//////

#include <iostream>
#include <random>
#include <math.h>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <iomanip>
constexpr int MIN = 1;
constexpr int MAX = 100;

constexpr int RAND_NUMS_TO_GENERATE = 1;
using namespace std;
int random(int a)
{   
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(MIN, MAX);

    for (int n = 0; n < RAND_NUMS_TO_GENERATE; ++n) 
    {
        return distr(eng);
    }
}
int main()
{ 
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now(); 
    const int nn = 10000;//cambiar 10k, 20k, 30k, 40k, 50k
    vector<int> distancias;
    int el_random;
    int dimension = 30;//cambiar 10, 20, 30, 40, 50
    int matriz[nn][dimension];//10000 * 10; 10000*20....50000*50

    for (int i = 0; i < nn; ++i) 
    {
        for(int j=0;j<dimension;j++)
        {
          el_random = random(0);
          matriz[i][j]=el_random;
        }
    }
    int distancia;
    int resta;
    int sumatoria;

    int valor_matr = matriz[1][dimension];
    for (int i = 0; i < nn; ++i)
    {
        for(int j=0;j<dimension;j++){
        if (matriz[1][j]!=valor_matr)//recursivo
          {
            resta = matriz[i][j] - matriz[1][j];
            distancia = resta * resta;
            sumatoria = sumatoria + distancia;
          }
        }
        sumatoria=sqrt(sumatoria);
        distancias.push_back(sumatoria);
    }
    //sort(distancias.begin(), distancias.end());
    int cont = 0;
    for (int j = 0; j < nn; j++) 
    {
      if(distancias[j] == distancias[j+1]){ cont++; }
      else 
      {
      //  cout  << distancias[j] << " :: " << cont <<endl;
        cont = 0;
      }
     }
    
  end = std::chrono::high_resolution_clock::now();
int64_t duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count(); 
  cout<<"tiempo: "<<duration<<endl;
  return 0;
}
