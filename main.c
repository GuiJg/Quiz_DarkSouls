#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(){
    int op1, op2, op3, op4, op5, op6, op7, op8, op9, op10;
    int resp1, resp2, resp3, resp4, resp5, resp6, resp7, resp8, resp9, resp10;
    char name[30];
    char fim;

    resp1 = resp2 = resp3 = resp4 = resp5 = resp6 = resp7 = resp8 = resp9 = resp10 = 0;

    setlocale(LC_ALL, "Portuguese");
    printf("Antes de começar, digite seu nickname abaixo :D (Somente letras)\n");
    printf("Nome do jogador: ");
    scanf(" %s", &name);
    printf("\n");

    printf("=========================================================================================\n");
    printf("            Seja bem-vindo %s ao meu quiz sobre a franquia DARK SOULS!\n");
    printf("Quiz sobre os jogos da franquia DARK SOULS, com perguntas desde os confins de seu começo.\n");
    printf("=========================================================================================\n");    

    printf("\n");

    printf("1- Antes de ser conhecida como Dark Souls, a franquia recebia outro nome. Qual era esse nome?\n");
    printf("\n");
    printf("(1) Devil Souls\n");
    printf("(2) Evil Souls\n");
    printf("(3) Demon Souls\n");
    printf("(4) Deprived Souls\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op1);
    printf("=====================\n");
    printf("\n");

    switch (op1){
        case 1:{
            printf("1- Antes de ser conhecida como Dark Souls, a franquia recebia outro nome. Qual era esse nome?\n");
            printf("\n");
            printf("Sua resposta: Devil Souls\n");
            printf("Resposta Correta: Demon's Souls\n");
            printf("Conhecido antes como Demon's Souls, foi um exclusivo de PS3 um pouco obscuro. Os títulos seguintes da franquia seguiram o mesmo rumo de seu atecessor, entretanto.\n");
            printf("\n");
            break;
        }
        case 2:{
            printf("1- Antes de ser conhecida como Dark Souls, a franquia recebia outro nome. Qual era esse nome?\n");
            printf("\n");
            printf("Sua resposta: Evil Souls\n");
            printf("Resposta Correta: Demon's Souls\n");
            printf("Conhecido antes como Demon's Souls, foi um exclusivo de PS3 um pouco obscuro. Os títulos seguintes da franquia seguiram o mesmo rumo de seu atecessor, entretanto.\n");
            printf("\n");
            break;
        }
        case 3:{
            resp1 = 1;
            printf("1- Antes de ser conhecida como Dark Souls, a franquia recebia outro nome. Qual era esse nome?\n");
            printf("\n");
            printf("Sua resposta: Demon's Souls\n");
            printf("Resposta Correta!!!\n");
            printf("Conhecido antes como Demon's Souls, foi um exclusivo de PS3 um pouco obscuro. Os títulos seguintes da franquia seguiram o mesmo rumo de seu atecessor, entretanto.\n");
            printf("\n");
            break;
        }
        case 4:{
            printf("1- Antes de ser conhecida como Dark Souls, a franquia recebia outro nome. Qual era esse nome?\n");
            printf("\n");
            printf("Sua resposta: Deprived Souls\n");
            printf("Resposta Correta: Demon's Souls\n");
            printf("Conhecido antes como Demon's Souls, foi um exclusivo de PS3 um pouco obscuro. Os títulos seguintes da franquia seguiram o mesmo rumo de seu atecessor, entretanto.\n");
            printf("\n");
            break;
        }
    }
    printf("2- Contando com Demon's Souls, com quantos títulos a franquia conta, atualmente (julho de 2014)?\n");
    printf("(1) 4\n");
    printf("(2) 3\n");
    printf("(3) 5\n");
    printf("(4) Nenhum das alternativas acima\n");
    printf("\n");
    
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op2);
    printf("=====================\n");
    printf("\n");

    switch (op2){
        case 1: {
            printf("2- Contando com Demon's Souls, com quantos títulos a franquia conta, atualmente (julho de 2014)?\n");
            printf("\n");
            printf("Sua resposta: 4\n");
            printf("Resposta correta: 3\n");
            printf("Conta com três títulos oficiais, sendo estes: Demon's Souls, Dark Souls e Dark Souls II.\n");
            printf("\n");
            break;
        }
        case 2: {
            resp2 = 1;
            printf("2- Contando com Demon's Souls, com quantos títulos a franquia conta, atualmente (julho de 2014)?\n");
            printf("\n");
            printf("Sua resposta: 3\n");
            printf("Resposta correta!!!!\n");
            printf("Conta com três títulos oficiais, sendo estes: Demon's Souls, Dark Souls e Dark Souls II.\n");
            printf("\n");
            break;
        }
        case 3: {
            printf("2- Contando com Demon's Souls, com quantos títulos a franquia conta, atualmente (julho de 2014)?\n");
            printf("\n");
            printf("Sua resposta: 5\n");
            printf("Resposta correta: 3\n");
            printf("Conta com três títulos oficiais, sendo estes: Demon's Souls, Dark Souls e Dark Souls II.\n");
            printf("\n");
            break;
        }
        case 4: {
            printf("2- Contando com Demon's Souls, com quantos títulos a franquia conta, atualmente (julho de 2014)?\n");
            printf("\n");
            printf("Sua resposta: Nenhum das alternativas acima\n");
            printf("Resposta correta: 3\n");
            printf("Conta com três títulos oficiais, sendo estes: Demon's Souls, Dark Souls e Dark Souls II.\n");
            printf("\n");
            break;
        }
    }
    printf("3- No titulo Dark Souls, começamos o jogo enjaulados em um Asilo. Qual era o nome desse Asilo?\n");
    printf("\n");
    printf("(1) Zombie Asylum\n");
    printf("(2) Lordran Asylum\n");
    printf("(3) Undead Asylum\n");
    printf("(4) Northern Undead Asylum\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op3);
    printf("=====================\n");
    printf("\n");

    switch (op3){
        case 1: {
            printf("3- No título Dark Souls, começamos o jogo enjaulados em um Asilo. Qual era o nome desse Asilo?\n");
            printf("\n");
            printf("Sua resposta: Zombie Asylum\n");
            printf("Resposta correta: Undead Asylum\n");
            printf("Apesar de a partir do New Game Plus, recomeçarmos enjaulados em Northern Undead Asylum, na primeira das primeiras jogadas começamos em Undead Asylum.\n");
            printf("\n");
            break;
        }
        case 2: {
            printf("3- No título Dark Souls, começamos o jogo enjaulados em um Asilo. Qual era o nome desse Asilo?\n");
            printf("\n");
            printf("Sua resposta: Lordran Asylum\n");
            printf("Resposta correta: Undead Asylum\n");
            printf("Apesar de a partir do New Game Plus, recomeçarmos enjaulados em Northern Undead Asylum, na primeira das primeiras jogadas começamos em Undead Asylum.\n");
            printf("\n");
            break;
        }
        case 3: {
            resp3 = 1;
            printf("3- No título Dark Souls, começamos o jogo enjaulados em um Asilo. Qual era o nome desse Asilo?\n");
            printf("\n");
            printf("Sua resposta: Undead Asylum\n");
            printf("Resposta correta!!!\n");
            printf("Apesar de a partir do New Game Plus, recomeçarmos enjaulados em Northern Undead Asylum, na primeira das primeiras jogadas começamos em Undead Asylum.\n");
            printf("\n");
            break;
        }
        case 4: {
            printf("3- No título Dark Souls, começamos o jogo enjaulados em um Asilo. Qual era o nome desse Asilo?\n");
            printf("\n");
            printf("Sua resposta: Northern Undead Asylum\n");
            printf("Resposta correta: Undead Asylum\n");
            printf("Apesar de a partir do New Game Plus, recomeçarmos enjaulados em Northern Undead Asylum, na primeira das primeiras jogadas começamos em Undead Asylum.\n");
            printf("\n");
            break;
        }
    }
    printf("4- Após fugirmos do asilo em Dark Souls, chegamos em um dos Mapas mais conhecidos da Franquia. Qual o nome deste mapa?\n");
    printf("\n");
    printf("(1) Firelink Shrine\n");
    printf("(2) Undead Shrine\n");
    printf("(3) Firelink Altar\n");
    printf("(4) First of the Flame\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op4);
    printf("=====================\n");
    printf("\n");

    switch (op4){
        case 1: {
            resp4 = 1;
            printf("4- Após fugirmos do asilo em Dark Souls, chegamos em um dos Mapas mais conhecidos da Franquia. Qual o nome deste mapa?\n");
            printf("\n");
            printf("Sua resposta: Firelink Shrine\n");
            printf("Resposta correta!!!!\n");
            printf("Firelink Shrine, um dos mapas mais amigáveis de Dark Souls. Este que é o lugar perfeito para comprar itens, arrumar seu personagem e testar suas habilidades com total paz no coração.\n");
            printf("\n");
            break;
        }
        case 2: {
            printf("4- Após fugirmos do asilo em Dark Souls, chegamos em um dos Mapas mais conhecidos da Franquia. Qual o nome deste mapa?\n");
            printf("\n");
            printf("Sua resposta: Undead Shrine\n");
            printf("Resposta correta: Firelink Shrine\n");
            printf("Firelink Shrine, um dos mapas mais amigáveis de Dark Souls. Este que é o lugar perfeito para comprar itens, arrumar seu personagem e testar suas habilidades com total paz no coração.\n");
            printf("\n");
            break;
        }
        case 3: {
            printf("4- Após fugirmos do asilo em Dark Souls, chegamos em um dos Mapas mais conhecidos da Franquia. Qual o nome deste mapa?\n");
            printf("\n");
            printf("Sua resposta: Firelink Altar\n");
            printf("Resposta correta: Firelink Shrine\n");
            printf("Firelink Shrine, um dos mapas mais amigáveis de Dark Souls. Este que é o lugar perfeito para comprar itens, arrumar seu personagem e testar suas habilidades com total paz no coração.\n");
            printf("\n");
            break;
        }
        case 4: {
            printf("4- Após fugirmos do asilo em Dark Souls, chegamos em um dos Mapas mais conhecidos da Franquia. Qual o nome deste mapa?\n");
            printf("\n");
            printf("Sua resposta: First of the Flame\n");
            printf("Resposta correta: Firelink Shrine\n");
            printf("Firelink Shrine, um dos mapas mais amigáveis de Dark Souls. Este que é o lugar perfeito para comprar itens, arrumar seu personagem e testar suas habilidades com total paz no coração.\n");
            printf("\n");
            break;
        }
    }
    printf("5- Desde Demon's Souls, temos um ponto seguro em comum, aquele que marca nosso Checkpoint, e nos permite recarregar as energias. São estas as:\n");
    printf("\n");
    printf("(1) Klin's\n");
    printf("(2) Flames\n");
    printf("(3) Firewoods\n");
    printf("(4) Bonfires\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op5);
    printf("=====================\n");
    printf("\n");
    
    switch (op5){
        case 1: {
            printf("5- Desde Demon's Souls, temos um ponto seguro em comum, aquele que marca nosso Checkpoint, e nos permite recarregar as energias. São estas as:\n");
            printf("\n");
            printf("Sua resposta: Klin's\n");
            printf("Resposta correta: Bonfires\n");
            printf("Bonfires (Conhecidas também como fogueiras). Avistar uma destas em qualquer jogo da Franquia, nos dá um sentimento de segurança imersivo. Além de Ponto Seguro, possui infinitas utilidades, uma mais importante que a outra.\n");
            printf("\n");
            break;
        }
        case 2: {
            printf("5- Desde Demon's Souls, temos um ponto seguro em comum, aquele que marca nosso Checkpoint, e nos permite recarregar as energias. São estas as:\n");
            printf("\n");
            printf("Sua resposta: Flames\n");
            printf("Resposta correta: Bonfires\n");
            printf("Bonfires (Conhecidas também como fogueiras). Avistar uma destas em qualquer jogo da Franquia, nos dá um sentimento de segurança imersivo. Além de Ponto Seguro, possui infinitas utilidades, uma mais importante que a outra.\n");
            printf("\n");
            break;
        }
        case 3:{ 
            printf("5- Desde Demon's Souls, temos um ponto seguro em comum, aquele que marca nosso Checkpoint, e nos permite recarregar as energias. São estas as:\n");
            printf("\n");
            printf("Sua resposta: Firewoods\n");
            printf("Resposta correta: Bonfires\n");
            printf("Bonfires (Conhecidas também como fogueiras). Avistar uma destas em qualquer jogo da Franquia, nos dá um sentimento de segurança imersivo. Além de Ponto Seguro, possui infinitas utilidades, uma mais importante que a outra.\n");
            printf("\n");
            break;
        }
        case 4: {
            resp5 = 1;
            printf("5- Desde Demon's Souls, temos um ponto seguro em comum, aquele que marca nosso Checkpoint, e nos permite recarregar as energias. São estas as:\n");
            printf("\n");
            printf("Sua resposta: Bonfires\n");
            printf("Resposta correta!!!!\n");
            printf("Bonfires (Conhecidas também como fogueiras). Avistar uma destas em qualquer jogo da Franquia, nos dá um sentimento de segurança imersivo. Além de Ponto Seguro, possui infinitas utilidades, uma mais importante que a outra.\n");
            printf("\n");
            break;
        }
    }
    printf("6- Desde Demon's Souls, em algum lugar do Mapa existe sempre um Ninho, com uma voz misteriosa, que aparenta ser de uma pequena criatura. Estes ninhos servem exatamente para quê?\n");
    printf("\n");
    printf("(1) Restaurar a humanidade\n");
    printf("(2) Fortalecer os equipamentos\n");
    printf("(3) Efetuar trocas de itens\n");
    printf("(4) Viajar pelos mapas\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op6);
    printf("=====================\n");
    printf("\n");
    
    switch (op6){
        case 1: {
            printf("6- Desde Demon's Souls, em algum lugar do Mapa existe sempre um Ninho, com uma voz misteriosa, que aparenta ser de uma pequena criatura. Estes ninhos servem exatamente para quê?\n");
            printf("\n");
            printf("Sua resposta: Restaurar a humanidade\n");
            printf("Resposta correta: Efetuar trocas de itens\n");
            printf("Nosso fiel companheirinho misterioso, sempre presente para trocar nossos itens por outros mais interessantes (ou não).\n");
            printf("\n");
            break;
        }
        case 2: {
            printf("6- Desde Demon's Souls, em algum lugar do Mapa existe sempre um Ninho, com uma voz misteriosa, que aparenta ser de uma pequena criatura. Estes ninhos servem exatamente para quê?\n");
            printf("\n");
            printf("Sua resposta: Fortalecer os equipamentos\n");
            printf("Resposta correta: Efetuar trocas de itens\n");
            printf("Nosso fiel companheirinho misterioso, sempre presente para trocar nossos itens por outros mais interessantes (ou não).\n");
            printf("\n");
            break;
        }
        case 3: {
            resp6 = 1;
            printf("6- Desde Demon's Souls, em algum lugar do Mapa existe sempre um Ninho, com uma voz misteriosa, que aparenta ser de uma pequena criatura. Estes ninhos servem exatamente para quê?\n");
            printf("\n");
            printf("Sua resposta: Efetuar trocas de itens\n");
            printf("Resposta correta!!!!\n");
            printf("Nosso fiel companheirinho misterioso, sempre presente para trocar nossos itens por outros mais interessantes (ou não).\n");
            printf("\n");
            break;
        }
        case 4: {
            printf("6- Desde Demon's Souls, em algum lugar do Mapa existe sempre um Ninho, com uma voz misteriosa, que aparenta ser de uma pequena criatura. Estes ninhos servem exatamente para quê?\n");
            printf("\n");
            printf("Sua resposta: Viajar pelos mapas\n");
            printf("Resposta correta: Efetuar trocas de itens\n");
            printf("Nosso fiel companheirinho misterioso, sempre presente para trocar nossos itens por outros mais interessantes (ou não).\n");
            printf("\n");
            break;
        }
    }
    printf("7- Em Dark Souls II, após a Cutscene inicial do jogo, aparecemos em um altar. Qual o nome deste altar (em inglês)?\n");
    printf("\n");
    printf("(1) Things Betwitxt\n");
    printf("(2) Enchanted Shrine\n");
    printf("(3) First of Link\n");
    printf("(4) Past of Flame\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op7);
    printf("=====================\n");
    printf("\n");

    switch (op7){
        case 1: {
            resp7 = 1;
            printf("7- Em Dark Souls II, após a Cutscene inicial do jogo, aparecemos em um altar. Qual o nome deste altar (em inglês)?\n");
            printf("\n");
            printf("Sua resposta: Things Betwitxt\n");
            printf("Resposta correta!!!!\n");
            printf("A área inicial de Dark Souls II, que já nos apresenta a movimentação e o expirito explorador que o jogo nos força a criar.\n");
            printf("\n");
            break;
        }
        case 2: {
            printf("7- Em Dark Souls II, após a Cutscene inicial do jogo, aparecemos em um altar. Qual o nome deste altar (em inglês)?\n");
            printf("\n");
            printf("Sua resposta: Enchanted Shrine\n");
            printf("Resposta correta: Things Betwitxt\n");
            printf("A área inicial de Dark Souls II, que já nos apresenta a movimentação e o expirito explorador que o jogo nos força a criar.\n");
            printf("\n");
            break;
        }
        case 3: {
            printf("7- Em Dark Souls II, após a Cutscene inicial do jogo, aparecemos em um altar. Qual o nome deste altar (em inglês)?\n");
            printf("\n");
            printf("Sua resposta: First of Link\n");
            printf("Resposta correta: Things Betwitxt\n");
            printf("A área inicial de Dark Souls II, que já nos apresenta a movimentação e o expirito explorador que o jogo nos força a criar.\n");
            printf("\n");
            break;
        }
        case 4: {
            printf("7- Em Dark Souls II, após a Cutscene inicial do jogo, aparecemos em um altar. Qual o nome deste altar (em inglês)?\n");
            printf("\n");
            printf("Sua resposta: Past of Flame\n");
            printf("Resposta correta: Things Betwitxt\n");
            printf("A área inicial de Dark Souls II, que já nos apresenta a movimentação e o expirito explorador que o jogo nos força a criar.\n");
            printf("\n");
            break;
        }
    }
    printf("8- Quais são os itens que nos permite voltar a forma humana em Dark Souls e Dark Souls II, respectivamente?\n");
    printf("\n");
    printf("(1) Pilgrim Stone e Pharro's Stone\n");
    printf("(2) Uncurse e Human Restorer\n");
    printf("(3) Humanity e Human Effigy\n");
    printf("(4) Bonfire Assetic e Palostone\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op8);
    printf("=====================\n");
    printf("\n");

    switch (op8){
        case 1: {
            printf("8- Quais são os itens que nos permite voltar a forma humana em Dark Souls e Dark Souls II, respectivamente?\n");
            printf("\n");
            printf("Sua resposta: Pilgrim Stone e Pharro's Stone\n");
            printf("Resposta correta: Humanity e Human Effigy\n");
            printf("As famosas Humanityes e sua prima, Human Effigy. Items essenciais para se progredir de forma sana pelo jogo.\n"); 
            printf("\n");
            break;      
        }
        case 2: {
            printf("8- Quais são os itens que nos permite voltar a forma humana em Dark Souls e Dark Souls II, respectivamente?\n");
            printf("\n");
            printf("Sua resposta: Uncurse e Human Restorer\n");
            printf("Resposta correta: Humanity e Human Effigy\n");
            printf("As famosas Humanityes e sua prima, Human Effigy. Items essenciais para se progredir de forma sana pelo jogo.\n"); 
            printf("\n");
            break;     
        }
        case 3: {
            resp8 = 1;
            printf("8- Quais são os itens que nos permite voltar a forma humana em Dark Souls e Dark Souls II, respectivamente?\n");
            printf("\n");
            printf("Sua resposta: Humanity e Human Effigy\n");
            printf("Resposta correta!!!!\n");
            printf("As famosas Humanityes e sua prima, Human Effigy. Items essenciais para se progredir de forma sana pelo jogo.\n"); 
            printf("\n");
            break;     
        }
        case 4: {
            printf("8- Quais são os itens que nos permite voltar a forma humana em Dark Souls e Dark Souls II, respectivamente?\n");
            printf("\n");
            printf("Sua resposta: Bonfire Assetic e Palostone\n");
            printf("Resposta correta: Humanity e Human Effigy\n");
            printf("As famosas Humanityes e sua prima, Human Effigy. Items essenciais para se progredir de forma sana pelo jogo.\n"); 
            printf("\n");
            break;   
        }
    }
    printf("9- Antes em Dark Souls, era-se necessário fechar o Jogo e recomeçá-lo para reenfrentar os chefes e restaurar os itens dos cenários. Em Dark Souls II, existe um item que ao ser queimado na Bonfire, causa o mesmo efeito, porém em uma área limitada próxima aquela mesma Bonfire. Como se chama este item?\n");
    printf("\n");
    printf("(1) Bonfire Restorer\n");
    printf("(2) Bonfire Assetic\n");
    printf("(3) Sublime Assetic\n");
    printf("(3) Undoner\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op9);
    printf("=====================\n");
    printf("\n");

    switch (op9){
        case 1: {
            printf("9- Antes em Dark Souls, era-se necessário fechar o Jogo e recomeçá-lo para reenfrentar os chefes e restaurar os itens dos cenários. Em Dark Souls II, existe um item que ao ser queimado na Bonfire, causa o mesmo efeito, porém em uma área limitada próxima aquela mesma Bonfire. Como se chama este item?\n");
            printf("\n");
            printf("Sua resposta: Bonfire Restorer\n");
            printf("Resposta correta: Bonfire Assetic\n");
            printf("Encontrado em vários cantos do Mapa, a Bonfire Assetic foi uma inovação muito importante e interessante de Dark Souls II. Isso nos permite o Farm de diversos itens raríssimos do jogo, mas claro, em troca do Bonfire Assetic.0\n");
            printf("\n");
            break;
        }
        case 2: {
            resp9 = 1;
            printf("9- Antes em Dark Souls, era-se necessário fechar o Jogo e recomeçá-lo para reenfrentar os chefes e restaurar os itens dos cenários. Em Dark Souls II, existe um item que ao ser queimado na Bonfire, causa o mesmo efeito, porém em uma área limitada próxima aquela mesma Bonfire. Como se chama este item?\n");
            printf("\n");
            printf("Sua resposta: Bonfire Assetic\n");
            printf("Resposta correta!!!!\n");
            printf("Encontrado em vários cantos do Mapa, a Bonfire Assetic foi uma inovação muito importante e interessante de Dark Souls II. Isso nos permite o Farm de diversos itens raríssimos do jogo, mas claro, em troca do Bonfire Assetic.0\n");
            printf("\n");
            break;
        }
        case 3: {
            printf("9- Antes em Dark Souls, era-se necessário fechar o Jogo e recomeçá-lo para reenfrentar os chefes e restaurar os itens dos cenários. Em Dark Souls II, existe um item que ao ser queimado na Bonfire, causa o mesmo efeito, porém em uma área limitada próxima aquela mesma Bonfire. Como se chama este item?\n");
            printf("\n");
            printf("Sua resposta: Sublime Assetic\n");
            printf("Resposta correta: Bonfire Assetic\n");
            printf("Encontrado em vários cantos do Mapa, a Bonfire Assetic foi uma inovação muito importante e interessante de Dark Souls II. Isso nos permite o Farm de diversos itens raríssimos do jogo, mas claro, em troca do Bonfire Assetic.0\n");
            printf("\n");
            break;
        }
        case 4: {
            printf("9- Antes em Dark Souls, era-se necessário fechar o Jogo e recomeçá-lo para reenfrentar os chefes e restaurar os itens dos cenários. Em Dark Souls II, existe um item que ao ser queimado na Bonfire, causa o mesmo efeito, porém em uma área limitada próxima aquela mesma Bonfire. Como se chama este item?\n");
            printf("\n");
            printf("Sua resposta: Undoner\n");
            printf("Resposta correta: Bonfire Assetic\n");
            printf("Encontrado em vários cantos do Mapa, a Bonfire Assetic foi uma inovação muito importante e interessante de Dark Souls II. Isso nos permite o Farm de diversos itens raríssimos do jogo, mas claro, em troca do Bonfire Assetic.0\n");
            printf("\n");
            break;
        }
    }
    printf("10- Como se chama o Item de Cura presente em todos os títulos da franquia Dark Souls?\n");
    printf("\n");
    printf("(1) Radiant Estus\n");
    printf("(2) Life Gem\n");
    printf("(3) Estus Gem\n");
    printf("(4) Estus Flask\n");
    printf("\n");
    printf("=====================\n");
    printf("Qual é sua resposta: ");
    scanf(" %d", &op10);
    printf("=====================\n");
    printf("\n");
    
    switch (op10){
        case 1: {
            printf("10- Como se chama o Item de Cura presente em todos os títulos da franquia Dark Souls?\n");
            printf("\n");
            printf("Sua resposta: Radiant Estus\n");
            printf("Resposta correta: Estus Flask\n");
            printf("Sendo este um item muito importante, o Estus Flask sempre se recarrega ao sentarmos em uma fogueira.\n");
            printf("\n");
            break;
        }
        case 2: {
            printf("10- Como se chama o Item de Cura presente em todos os títulos da franquia Dark Souls?\n");
            printf("\n");
            printf("Sua resposta: Life Gem\n");
            printf("Resposta correta: Estus Flask\n");
            printf("Sendo este um item muito importante, o Estus Flask sempre se recarrega ao sentarmos em uma fogueira.\n");
            printf("\n");
            break;
        }
        case 3: {
            printf("10- Como se chama o Item de Cura presente em todos os títulos da franquia Dark Souls?\n");
            printf("\n");
            printf("Sua resposta: Estus Gem\n");
            printf("Resposta correta: Estus Flask\n");
            printf("Sendo este um item muito importante, o Estus Flask sempre se recarrega ao sentarmos em uma fogueira.\n");
            printf("\n");
            break;
        }
        case 4: {
            resp10 = 1;
            printf("10- Como se chama o Item de Cura presente em todos os títulos da franquia Dark Souls?\n");
            printf("\n");
            printf("Sua resposta: Estus Flask\n");
            printf("Resposta correta!!!!\n");
            printf("Sendo este um item muito importante, o Estus Flask sempre se recarrega ao sentarmos em uma fogueira.\n");
            printf("\n");
            break;
        }
    }
    if((resp1 == 1) && (resp2 == 1) && (resp3 == 1) && (resp4 == 1) && (resp5 == 1) && (resp6 == 1) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
       printf("\n");
       printf("Você acertou 10 de 10 perguntas!");
       printf("\n");
    }else{
        if((resp1 == 0) && (resp2 == 1) && (resp3 == 1) && (resp4 == 1) && (resp5 == 1) && (resp6 == 1) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
            printf("\n");
            printf("Você acertou 9 de 10 perguntas\n");
            printf("\n");
        }   
        else{
            if((resp1 == 0) && (resp2 == 0) && (resp3 == 1) && (resp4 == 1) && (resp5 == 1) && (resp6 == 1) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
                printf("\n");
                printf("Você acertou 8 de 10 perguntas\n");
                printf("\n");
            }
            else{
                if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 1) && (resp5 == 1) && (resp6 == 1) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
                    printf("\n");
                    printf("Você acertou 7 de 10 perguntas\n");
                    printf("\n");
                }
                else{
                    if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 1) && (resp6 == 1) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
                        printf("\n");
                        printf("Você acertou 6 de 10 perguntas\n");
                        printf("\n");
                    }
                    else{
                        if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 0) && (resp6 == 1) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
                            printf("\n");
                            printf("Você acertou 5 de 10 perguntas\n");
                            printf("\n");
                        }
                        else{
                            if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 0) && (resp6 == 0) && (resp7 == 1) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
                                printf("\n");
                                printf("Você acertou 4 de 10 perguntas\n");
                                printf("\n");
                            }
                            else{
                                if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 0) && (resp6 == 0) && (resp7 == 0) && (resp8 == 1) && (resp9 == 1) && (resp10 == 1)){
                                    printf("\n");
                                    printf("Você acertou 3 de 10 perguntas\n");
                                    printf("\n");
                                }
                                else{
                                    if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 0) && (resp6 == 0) && (resp7 == 0) && (resp8 == 0) && (resp9 == 1) && (resp10 == 1)){
                                        printf("\n");
                                        printf("Você acertou 2 de 10 perguntas\n");
                                        printf("\n");
                                    }
                                    else{
                                        if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 0) && (resp6 == 0) && (resp7 == 0) && (resp8 == 0) && (resp9 == 0) && (resp10 == 1)){
                                            printf("\n");
                                            printf("Você acertou 1 de 10 perguntas\n");
                                            printf("\n");
                                        }
                                        else{
                                            if((resp1 == 0) && (resp2 == 0) && (resp3 == 0) && (resp4 == 0) && (resp5 == 0) && (resp6 == 0) && (resp7 == 0) && (resp8 == 0) && (resp9 == 0) && (resp10 == 0)){
                                                printf("\n");
                                                printf("Você acertou 0 de 10 perguntas ;-;\n");
                                                printf("\n");
                                            }    
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    printf("Obrigado por jogar meu quiz %s :D\n", name);

    system('PAUSE');
    return 0;
}