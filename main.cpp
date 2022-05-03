#include <iostream>
using namespace std;
int main() {

string nome; 
char sexo;
bool vivo = true;
int idade=0;
int opcao;
int fome, higiene, ativo, energia, inteligencia, felicidade, saude;
int seed = time (0);

cout << "Dê um nome ao seu tamagotchi" << endl;
cin >> nome;

cout << "Quer adotar um macho (m/M) ou fêmea (f/F)?" << endl;
cin >> sexo;
 

  cout << "Seu Tamagotchi acabou de sair do ovo!" << endl;
  
  
  cout << "Nome:" << nome << endl;

  switch (sexo)
  {
 case 'm':
 case 'M':
  cout << "Sexo:" << sexo << endl;
  break;

 case 'f':
 case 'F':
  cout << "Sexo:" << sexo << endl;
  break;

}// SWITCH
 
  cout << "Idade:" << idade << endl;
  idade++;
    
    fome = rand () % 49 +51;
  cout << "Fome:" << fome << endl;
  
  higiene = rand () % 49 +51;
  cout << "Higiene:" << higiene << endl;
 
    saude = rand () % 49 +51;
  cout << "Saúde:" << saude << endl;
 
    inteligencia = rand () % 49 +51;
  cout << "Inteligência:" << inteligencia << endl;
  
    ativo = rand () % 49 +51;
  cout << "Atividade:" << ativo << endl;
  
    energia = rand () % 49 +51;
  cout << "Energia:" << energia << endl;
 
    felicidade = rand () % 49 +51;
  cout << "Felicidade:" << felicidade << endl;
  
      do 
    {
      cout << "MENU DE OPÇÕES!" << endl;
      cout << "1 - COMER" << endl;
      cout << "2 - PRATICAR ESPORTE" << endl;
      cout << "3 - LER" << endl;
      cout << "4 - JOGAR" << endl;
      cout << "5 - TOMAR BANHO" << endl;
      cout << "6 - TOMAR REMÉDIO" << endl;
      cout << "7 - DORMIR" << endl;
      cout << "8 - DESLIGAR" << endl;
      cin >> opcao;

      switch (opcao)
      {
      case 1:
      cout << "COMER" << endl;
      if ((fome < 100 && saude > 50) || (felicidade > 50 ))
        {
          cout << nome << " " << "está comendo! YUMMYYY! ^_^" << endl;
        fome = fome +30;
        felicidade = felicidade +5;
        saude = saude +10;
        higiene = higiene -10;
        energia = energia +20;
         
         if (fome > 100 )
         {
         fome = 100;
         }
         
         if (felicidade > 100)
         {
         felicidade = 100;
         }
         
         if (saude > 100)
         {
         saude = 100;
         }
         
         if (energia > 100)
         {
         energia = 100;
         }
         
          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
        break;
          
          }//if

        else if ((fome == 100 && felicidade > 70 ) || (felicidade < 30))
        {
          cout << nome << " " << "mesmo satisfeito(a) continua a comer! o_O" << endl;
        saude = saude -10;
        felicidade = felicidade +10;

          if (felicidade > 100)
          {
          felicidade = 100;
          }
          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
        break;

        } //else if   

        else 
        {
          cout << nome << " " << "recusa-se a comer." << endl;
          break;
        }//else
          
          case 2:
          cout << "PRATICAR ESPORTE" << endl;
      
          if (energia > 40 && saude > 50)
          {
              cout << "Obá!" << " " << nome << " " << "está praticando esporte ;D" << endl;
            fome = fome -20;
            energia = energia -30;
            saude = saude +20;
            felicidade = felicidade +10;
            ativo = ativo +10;
            higiene = 0;

              if (saude> 100)
              {
                saude = 100;
              }

              if (felicidade > 100)
              {
                felicidade = 100;
              }

              if (ativo > 100)
              {
                ativo = 100;
              }

          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
            break;
          }// if

          else 
          {
            cout << nome << " " << "não quer praticar esporte. :(" << endl;
            break;
          }//else

      case 3:
      cout << "LER" << endl;
      
        if (fome > 30 && energia > 30 )
        {
            cout << nome << " " << "quer absorver conhecimento através da leitura! ;)" << endl;
          inteligencia = inteligencia +10;
          energia = energia -5;

          if (inteligencia > 100)
          {
            inteligencia = 100;
          }

          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
          break;
        }//if

        else 
        {
          cout << nome << " " << "não está a fim de uma leitura :(" << endl;
          break;
        }// else

      case 4:
      cout << "JOGAR" << endl;
      
        if (energia > 10 || felicidade > 50)
        {
            cout << nome << " " << "quer jogar! YEAH! XD" << endl;
          felicidade = felicidade +10;
          inteligencia = inteligencia +5;
          higiene = higiene -5;

          if (felicidade > 100)
          {
            felicidade = 100;
          }

          if (inteligencia > 100)
          {
            inteligencia = 100;
          }

          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
          break;
        }//if

        else 
        {
          cout << nome << " " << "se recusa a jogar" << endl;
          break;
        }//else

      case 5:
      cout << "TOMAR BANHO" << endl;
      
        if (higiene < 30 && felicidade > 10)
        {
            cout << nome << " " << "precisa de um banho! O_o" << endl;
          higiene = 100;
          felicidade = felicidade +10;
          saude = saude +10;

          if (felicidade > 100)
            {
              felicidade = 100;
            }

            if (saude > 100)
              {
              saude = 100;
              }

          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
          break;
        }//if

        else 
        {
          cout << nome << " " << "não quer um banho agora!" << endl;
          break;
        }//else

      case 6:
      cout << "TOMAR REMÉDIO" << endl;
      
        if (saude < 30)
        {
            cout << nome << " " << "precisa tomar seu remédio para melhorar!" << endl;
          saude = saude +10;

          if (saude > 100)
            {
            saude = 100;
            }

          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
          break;
        }//if

        else 
        {
          cout << nome << " " << "recusa-se a tomar seu remédio!" << endl; 
          break;
        }//else

      case 7:
      cout << "DORMIR" << endl;
      
    if ((energia < 30 && saude == 100) || (saude < 30))
        {
          if (energia < 30 && saude == 100)
          {
          cout << nome << " " << "está com sono, boa noite! V_V zzzzzZZZZ" << endl;
          
           energia = 100;
          
          cout << "Idade:" << idade << endl;
          idade++;
          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
          break;
          }//if2
          
          else if (saude < 30)
          {
          cout << nome << " " << "está doente e precisa de descanso, boa noite! V_V zzzzzZZZZ" << endl;
          
            energia = energia +30;
            saude = saude +10;


              if (energia > 100)
              {
                energia = 100;
              }

              if (saude > 100)
              {
                saude = 100;
              }
            
          cout << "Idade:" << idade << endl;
          idade++;
          cout << "Fome:" << fome << endl;
          cout << "Higiene:" << higiene << endl;
          cout << "Saúde:" << saude << endl;
          cout << "Inteligência:" << inteligencia << endl;
          cout << "Atividade:" << ativo << endl;
          cout << "Energia:" << energia << endl;
          cout << "Felicidade:" << felicidade << endl;
          break;
            
          } //else if
            
          }//if

        else
        {
          cout << nome << " " << "não está com sono!" << endl;
          break;
        }//else 

      case 8:
      cout << "DESLIGAR" << endl;
        cout << "Jogo encerrado por hoje, volte quando quiser." << endl;
      break;
      return 0;

      default:
      cout << "OPÇÃO INCORRETA" << endl;

      }//SWITCH OPÇÃO

      if ((energia == 0 && saude == 0) || (vivo = false) || (fome == 0))
      {
      cout << "R.I.P" << nome << endl;
      cout <<   """" << endl;
      cout << "" "" "" << endl;
      cout << "" "" "" << endl;
      cout <<    "" << endl;
      cout <<    "" << endl;
      }//if 

    } while (vivo==true || opcao!=8);
      
      } //MAIN
  