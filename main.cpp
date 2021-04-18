#include <iostream>
using namespace std;

int main() {
  int i=0, qn=0, l=0, c=0;
  string tecla;
  string teclav[8][4]={{"#2=1", "#2=2","#2=3","#2=4"},{"#3=1", "#3=2", "#3=3", "#3=4"},{"#4=1", "#4=2", "#4=3", "#4=4"},{"#5=1", "#5=2", "#5=3", "#5=4"},{"#6=1", "#6=2", "#6=3", "#6=4"},{"#7=1", "#7=2", "#7=3", "#7=4"},{"#8=1", "#8=2", "#8=3", "#8=4"},{"#9=1", "#9=2", "#9=3", "#9=4"}}, letras[8][4]={{"a", "b", "c", " "},{"d", "e", "f", " "},{"g", "h", "i", " "},{"j", "k", "l", " "},{"m", "n", "o", " "},{"p", "q", "r", "s"},{"t", "u", "v", ""},{"w", "x", "y", "z"}};


  cout << "Informe a quantidade de digitos a ser digitados: \n";
  cin >> qn;
  string palavra[qn];
 
  while (i<qn){
    cout << "Digite a tecla e a quantidade de vezes a ser pressionada (#TECLA=N a ser pressionada): \n";
    cin >> tecla;

    for(int j=0; j<8; j++){
      for(int k=0; k<4; k++){
        if (tecla == teclav[j][k]){
            palavra[i]=letras[j][k];
            j=8;
            k=4;
          }
        }
     }
  i++;
  }
  for(int p=0; p<qn; p++){
    cout << palavra[p];
  }
} 