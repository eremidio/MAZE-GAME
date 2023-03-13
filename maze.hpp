//ESTE ARQUIVO CONTEM FUNÇÕES DE TEXTO QUE SERÃO USADAS NO JOGO DE LABIRINTO

/*CABEÇALHO*/
#include<cstdlib>
#include<iostream>
using namespace std;

//Titulo do jogo
void title(){
//Variáveis (sequência de escapes ASCII)
const int x=34;
const int y=22;
const int z=01;
//Texto


printf("\033[%dm\033[%dm\033[%dm  {__       {__      {_       {_______ {__{________        {____         {_       {__       {__{________\033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm  {_ {__   {___     {_ __            {__  {__            {_    {__      {_ __     {_ {__   {___{__      \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm  {__ {__ { {__    {_  {__          {__   {__           {__            {_  {__    {__ {__ { {__{__      \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm  {__  {__  {__   {__   {__       {__     {______       {__           {__   {__   {__  {__  {__{______  \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm  {__   {_  {__  {______ {__     {__      {__           {__   {____  {______ {__  {__   {_  {__{__      \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm  {__       {__ {__       {__  {__        {__            {__    {_  {__       {__ {__       {__{__      \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm  {__       {__{__         {__{___________{________       {_____   {__         {__{__       {__{________ \033[0m\n", x, y, z);
                                                                                                      
int flag1=cin.get();
            };

//Explicação de como funciona o aplicativo
void how_to_play(){
//Variáveis 
const int x=01;
//Texto
printf("\033[%dm\nEste é um jogo do labirinto.\nNeste jogo o objetivo é encontrar um caminho até a saída do labirinto.\nPara se movimentar o labirinto use o seu teclado numérico, tome a seguinte referência:\n2-> movimento para baixo, 4-> movimento para a esquerda,\n6-> movimento para a direita, 8-> movimento para cima,\n5-> para desistência ou para se assinalar a impossibilidade de se completar o jogo.\nUse as setas do teclado numérico como referência.\nErros na inserção de dados podem acarretar erros de lógica no jogo.\033[0m\n", x);

//Pausa
int flag1=cin.get();

                  };

//Créditos
void credits(){
//Variáveis 
const int x=95;
//Texto
printf("\033[%dm Escrito por Elias Rodrigues Emídio.\n\033[0m", x);
              };

//Despedida
void end_text(){
//Variáveis (sequência de escapes ASCII)
const int x=34;
const int y=06;
const int z=01;
//Texto
printf("\033[%dm\033[%dm\033[%dm     {____     {__                                        {__      \033[0m\n", x, y, z);                                   
printf("\033[%dm\033[%dm\033[%dm   {__    {__  {__              {_                        {__         \033[0m\n", x, y, z);                                
printf("\033[%dm\033[%dm\033[%dm {__        {__{__      {_ {___      {__      {__         {__   {__         {_ {__     {__    {_ {___ \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm {__        {__{__ {__   {__   {__ {__  {__ {__  {__  {__ {__ {__  {__      {_  {__  {__  {__  {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm {__        {__{__   {__ {__   {__{__   {__{__   {__ {_   {__{__    {__     {_   {__{__    {__ {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm   {__     {__ {__   {__ {__   {__ {__  {__{__   {__ {_   {__ {__  {__      {__ {__  {__  {__  {__    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm     {____     {__ {__  {___   {__     {__   {__ {___ {__ {__   {__         {__        {__    {___    \033[0m\n", x, y, z);
printf("\033[%dm\033[%dm\033[%dm                                    {__                                     {__     \033[0m\n", x, y, z);                  
printf("\033[%dm\033[%dm\033[%dm  \033[0m\n", x, y, z);                                                                                                                                                                                                        
printf("\033[%dm\033[%dm\033[%dm \033[0m\n", x, y, z);                                                                                                     
printf("\033[%dm\033[%dm\033[%dm                                                {__     {__     {__    \033[0m\n", x, y, z);                               
printf("\033[%dm\033[%dm\033[%dm    {__                                         {__     {__     {__      \033[0m\n", x, y, z);                             
printf("\033[%dm\033[%dm\033[%dm          {__       {__      {__    {_ {___     {__     {__     {__   \033[0m\n", x, y, z);                                
printf("\033[%dm\033[%dm\033[%dm    {__ {__  {__  {__  {__ {__  {__  {__        {_      {_      {_   \033[0m\n", x, y, z);                                 
printf("\033[%dm\033[%dm\033[%dm    {__{__    {__{__   {__{__   {__  {__        {_      {_      {_   \033[0m\n", x, y, z);                                 
printf("\033[%dm\033[%dm\033[%dm    {__ {__  {__  {__  {__{__   {__  {__  \033[0m\n", x, y, z);                                                            
printf("\033[%dm\033[%dm\033[%dm    {__   {__         {__   {__ {___{___        {__     {__     {__        \033[0m\n", x, y, z);                           
printf("\033[%dm\033[%dm\033[%dm {___              {__     \033[0m\n", x, y, z);                                                                          
//Pausa
int flag1=cin.get();
               };
