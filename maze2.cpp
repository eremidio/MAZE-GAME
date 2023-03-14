//VAMOS CRIAR UM JOGO DE CRIAÇÃO DE LABIRINTOS EM C++ IMPLEMENTANDO UM NOVO ALGORITMO
/*
COMPILAR ESTE PROGRAMA COM O COMANDO:  g++ -o maze2 maze2.cpp
*/

/*CABEÇALHO*/
#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
#include"maze.hpp"
using namespace std;


//****************************************************************************************************************************
//CLASSE DO JOGO DE LABIRINTO
class maze_game{
public:
string maze[31][91];//TABULEIRO
int i, j;//VARIÁVEIS DE ITERAÇÕES EM LOOPS
int dig_number;//VARIÁVEL ALEATÓRIA USADA PARA CRIAR O LABIRINTO (0->DIREITA, 1->ESQUERDA, 2->CIMA, 3->BAIXO)
int maze_start_x;//COORDENADA X USADA PARA CRIAR O LABIRINTO
int maze_start_y;//COORDENADA Y USADA PARA CRIAR O LABIRINTO
int maze_end_x;//COORDENADA X USADA PARA CRIAR O LABIRINTO
int maze_end_y;//COORDENADA Y USADA PARA CRIAR O LABIRINTO
int maze_wall_number;//FUNÇÃO PARA CONTABILIZAR O NÚMERO DE PAREDES DO LABIRINTO
int player_x;//COORDENADA X DO JOGADOR
int player_y;//COORDENADA Y DO JOGADOR
int user_input;//CONTROLE DE MOVIMENTO DO JOGADOR
bool win_game;//VARIÁVEL QUE DEFINE SE O JOGO FOI COMPLETADO COM SUCESSO
bool winnable;//VARIÁVEL QUE DEFINE SE O LAVBIRINTO CRIADO PODE SER RESOLVIDO OU NÃO, OU ASSINALA DESISTÊNCIA DO JOGADOR

//MÉTODOS DA CLASSE
void print_board();//FUNÇÃO PARA PRINTAR UM TABULEIRO DO JOGO
void set_board();//FUNÇÃO PARA INSTANCIAR O TABULEIRO DO JOGO
void dig_maze();//FUNÇÃO PARA CRIAR UM LABIRINTO NO TABULEIRO
void set_player();//FUNÇÃO QUE AJUSTA O CONTROLE DO JOGADOR
void get_user_input();//FUNÇÃO QUE RECEBE UM INPUT DO JOGADOR
void move();//FUNÇÃO QUE MOVIMENTA O PERSONAGEM
void win();//FUNÇÃO QUE DETERMINA SE O JOGO FOI COMPLETADO COM SUCESSO

               };

//****************************************************************************************************************************
//MÉTODOS DA CLASSE
//Função que printa o tabuleiro do jogo na tela
void maze_game::print_board(){
for (i=0; i<31; ++i){
for(j=0;j<91; ++j)
cout<<maze[i][j];
cout<<"\n";
                    };
                             };

//Função que prepara o tabuleiro do jogo
void maze_game::set_board(){
for (i=0; i<31; ++i){
for (j=0; j<91; ++j){
if((i%2)==0 && (j%2)==0)
maze[i][j]="+";
if((i%2)==0 && (j%2)==1)
maze[i][j]="-";
if((i%2)==1 && (j%2)==0)
maze[i][j]="|";
if((i%2)==1 && (j%2)==1)
maze[i][j]=" ";
                    };
                    };
cout<<"\n\n\n";
                           };

//Função que define um labirinto no tabuleiro indo da posição (1, 0) até a posição (29, 90) 
void maze_game::dig_maze(){
//Semente para geração de números aleatórios
srand(time(NULL));
//Ajuste de variáveis
maze_wall_number=0;
maze_start_x=1;
maze_start_y=0;
maze_end_x=29;
maze_end_y=90;
maze[maze_start_x][maze_start_y]=" ";//POSIÇÃO DE PARTIDA
maze[maze_end_x][maze_end_y]=" ";//POSIÇÃO DE CHEGADA

//Escavando o labirinto usando a abordagem do encontro no meio do tabuleiro do jogo
mainloop:
while(true){
//Iniciando no ponto de partida
//Parede vertical
if((maze_start_x%2)==1 && (maze_start_y%2)==0){
dig_number=rand()%101;
//Movimento na horizontal para a direita
if(dig_number>50 && (maze_start_y+2)<90){
maze_start_y+=2;

//Fim da criação do tabuleiro alcançada
if(maze[maze_start_x][maze_start_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_start_x][maze_start_y]=" ";
                                        };
//Movimento na diagonal direita-baixo
if(dig_number<50 && (maze_start_x+1)<30 && (maze_start_y+1)<90){
maze_start_x++;
maze_start_y++;

//Fim da criação do tabuleiro alcançada
if(maze[maze_start_x][maze_start_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_start_x][maze_start_y]=" ";
                                                               };

                                              };
//Parede horizontal
if((maze_start_x%2)==0 && (maze_start_y%2)==1){
dig_number=rand()%101;

//Movimento na horizontal para baixo
if(dig_number>50 && (maze_start_x+2)<30){
maze_start_x+=2;

//Fim da criação do tabuleiro alcançada
if(maze[maze_start_x][maze_start_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_start_x][maze_start_y]=" ";


                                        };

//Movimento na diagonal direita-baixo
if(dig_number<50 && (maze_start_x+1)<30 && (maze_start_y+1)<90){
maze_start_x++;
maze_start_y++;

//Fim da criação do tabuleiro alcançada
if(maze[maze_start_x][maze_start_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_start_x][maze_start_y]=" ";
                                                               };


                                              };

//Iniciando no ponto de sáida
//Parede vertical
if((maze_end_x%2)==1 && (maze_start_y%2)==0){
dig_number=rand()%101;
//Movimento na horizontal para a esquerda
if(dig_number>50 && (maze_end_y-2)>0){
maze_end_y-=2;

//Fim da criação do tabuleiro alcançada
if(maze[maze_end_x][maze_end_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_end_x][maze_end_y]=" ";
                                        };
//Movimento na diagonal esquerda-cima
if(dig_number<50 && (maze_end_x-1)>0 && (maze_end_y-1)>0){
maze_end_x--;
maze_end_y--;

//Fim da criação do tabuleiro alcançada
if(maze[maze_end_x][maze_end_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_end_x][maze_end_y]=" ";
                                                               };

                                              };
//Parede horizontal
if((maze_end_x%2)==0 && (maze_end_y%2)==1){
dig_number=rand()%101;

//Movimento na vertical para cima
if(dig_number>50 && (maze_end_x-2)>0){
maze_end_x-=2;

//Fim da criação do tabuleiro alcançada
if(maze[maze_end_x][maze_end_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_end_x][maze_end_y]=" ";


                                        };

//Movimento na diagonal esquerda-cima
if(dig_number<50 && (maze_end_x-1)>0 && (maze_end_y-1)>0){
maze_start_x--;
maze_start_y--;

//Fim da criação do tabuleiro alcançada
if(maze[maze_end_x][maze_end_y]==" ")
break;

//Caso contrário escavar o tabuleiro
maze[maze_end_x][maze_end_y]=" ";
                                                               };


           };//Fim do loop de escavação do tabuleiro

//Adicionando uma dificuldade extra na criação do labirinto (eliminando outras paredes do labirinto)
for (i=1; i<30; ++i){
for (j=1; j<90; ++j){
if((i%2)==1 || (j%2)==1){
if(maze[i][j]==" ")
continue;
else{
dig_number=rand()%101;
if(dig_number>40)
maze[i][j]=" ";
else{
maze_wall_number++;
continue;
    };
    };

                        };
                    };
                    };

                          };
//Condição para que o labirinto aprensente um grau minimo de dificuldade
if(maze_wall_number<50)
goto mainloop;

//Condição para que o labirinto tenha sempre uma saída
if(maze[28][89]=="-" && maze[29][88]=="|")
goto mainloop;

};
//Função que posiciona o player em sua posição inicial
void maze_game::set_player(){
player_x=1;
player_y=1;
maze[player_x][player_y]="O";
winnable=true;
win_game=false;
                            };

//Função que recebe input do usuário
void maze_game::get_user_input(){
cout<<"\n\nJogador realize seu movimento. Escolha uma das opções:\n6-> direita, 4-> esquerda,8--> cima, 2-> baixo, 5-> finalizar(ou impossibilidade de se completar) o jogo e pressione enter:\n";
cin>>user_input;
                                };

//Função que executa o movimento do jogador
void maze_game::move(){
maze[player_x][player_y]=" ";

if(user_input==2)
player_x+=2;
if(user_input==8)
player_x-=2;
if(user_input==6)
player_y+=2;
if(user_input==4)
player_y-=2;
if(user_input==5)
winnable=false;

maze[player_x][player_y]="O";

                      };

//Função que determina se o jogo foi completado
void maze_game::win(){
if(maze[29][89]=="O")
win_game=true;
else
win_game=false;
                     };


//****************************************************************************************************************************

//FUNÇÃO PRINCIPAL DO PROGRAMA
int main(){
//INSTANCIADO UM OBJETO DA CLASSE DO JOGO
maze_game game;
//VARIÁVEIS LOCAIS
char token;

//PROCEDIMENTOS
//Título do jogo e explicação de funcionamento do mesmo
title();
how_to_play();

//Criando um labirinto no tabuleiro do jogo e printando o mesmo na tela
restart:
cout<<"Eis o tabuleiro do jogo em sua configuração inicial:\n";
game.set_board();
game.dig_maze();
game.set_player();
game.print_board();

//Loop principal do jogo recebendo dados do usuário e realizando o movimento do jogador
while(game.win_game==false){
game.get_user_input();
game.move();
game.win();
game.print_board();
if(game.winnable==false)
break;
                       };
//Reiniciando o jogo
cout<<"Digite 'r' para reiniciar o jogo ou outro caractére qualquer para encerrar o jogo:\n";
cin>>token;

if(token =='r')
goto restart;

//FINALIZANDO O PROGRAMA
end_text();
credits();
return 0;
          }
