/*
31.	Faça uma função que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. A função deve retornar, a duração do jogo em minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/
#include <stdio.h>

int calcularDuracaoJogo(int horaInicio, int minutoInicio, int horaTermino, int minutoTermino) {
    // Converter hora e minuto de início para minutos desde o início do dia
    int inicioEmMinutos = horaInicio * 60 + minutoInicio;
    
    // Converter hora e minuto de término para minutos desde o início do dia
    int terminoEmMinutos = horaTermino * 60 + minutoTermino;
    
    // Calcular a duração do jogo em minutos
    int duracao;
    if (terminoEmMinutos >= inicioEmMinutos) {
        duracao = terminoEmMinutos - inicioEmMinutos;
    } else {
        // Caso o jogo termine no dia seguinte
        duracao = (24 * 60 - inicioEmMinutos) + terminoEmMinutos;
    }
    
    return duracao;
}

int main() {
    int horaInicio, minutoInicio, horaTermino, minutoTermino;
    
    // Solicitar ao usuário a hora e minuto de início
    printf("Digite a hora de início do jogo (0-23): ");
    scanf("%d", &horaInicio);
    printf("Digite os minutos de início do jogo (0-59): ");
    scanf("%d", &minutoInicio);
    
    // Solicitar ao usuário a hora e minuto de término
    printf("Digite a hora de término do jogo (0-23): ");
    scanf("%d", &horaTermino);
    printf("Digite os minutos de término do jogo (0-59): ");
    scanf("%d", &minutoTermino);
    
    // Calcular e exibir a duração do jogo
    int duracao = calcularDuracaoJogo(horaInicio, minutoInicio, horaTermino, minutoTermino);
    printf("A duração do jogo é de %d minutos\n", duracao);
    
    return 0;
}