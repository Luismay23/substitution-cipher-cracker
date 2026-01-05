#include <iostream>
#include <iomanip>

using namespace std;


void selectionSort(double* const , char* const, const int );
void swap(double* const, double* const);
void swap(char* const, char* const);

int main() {


  int letterCount[27]={0};

  char message[] = "lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx qmbm wi"
                   "bpr xjvni mkd ymibrut jx irhx wi bpr riirkvr jx"
                   "ymbinlmtmipw utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr"
                   "yjeryrkbi jx bpr qmbm mvvjudwko bj yt wkbrusurbmbwjk"
                   "lmird jk xjubt trmui jx ibndt\n\n"

                   "wb wi kjb mk rmit bmiq bj rashmwk rmvp yjeryrkb mkd wbi"
                   "iwokwxwvmkvr mkd ijyr ynib urymwk nkrashmwkrd bj ower m"
                   "vjyshrbr rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd"
                   "wkiswurd bj invp mk rabrkb bpmb pr vjnhd urmvp bpr ibmbr"
                   "jx rkhwopbrkrd ywkd vmsmlhr jx urvjokwgwko ijnkdhrii"
                   "ijnkd mkd ipmsrhrii ipmsr w dj kjb drry ytirhx bpr xwkmh"
                   "mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb"
                   "bpmb bpr xjhhjcwko wi bpr sujsru msshwvmbwjk mkd"
                   "wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb bpr"
                   "riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb";




  int length = 0;

  for (int i = 0; message[i] != '\0'; i++){
    length++;
    switch (message[i]){
      case 'a':
      letterCount[0]++;
        break;
      case 'b':
      letterCount[1]++;
        break;
      case 'c':
      letterCount[2]++;
        break;
      case 'd':
      letterCount[3]++;
        break;
      case 'e':
      letterCount[4]++;
        break;
      case 'f':
      letterCount[5]++;
        break;
      case 'g':
      letterCount[6]++;
        break;
      case 'h':
      letterCount[7]++;
        break;
      case 'i':
      letterCount[8]++;
        break;
      case 'j':
      letterCount[9]++;
        break;
      case 'k':
      letterCount[10]++;
        break;
      case 'l':
      letterCount[11]++;
        break;
      case 'm':
      letterCount[12]++;
        break;
      case 'n':
      letterCount[13]++;
        break;
      case 'o':
      letterCount[14]++;
        break;
      case 'p':
      letterCount[15]++;
        break;
      case 'q':
      letterCount[16]++;
        break;
      case 'r':
      letterCount[17]++;
        break;
      case 's':
      letterCount[18]++;
        break;
      case 't':
      letterCount[19]++;
        break;
      case 'u':
      letterCount[20]++;
        break;
      case 'v':
      letterCount[21]++;
        break;
      case 'w':
      letterCount[22]++;
        break;
      case 'x':
      letterCount[23]++;
        break;
      case 'y':
      letterCount[24]++;
        break;
      case 'z':
      letterCount[25]++;
        break;
      case ' ':
      letterCount[26]++;
        break;


      default:
        cout<<endl;
    }


  }

  int noSpacesLength = length-letterCount[26];

  cout <<"The message is : "<< noSpacesLength <<" characters long"<<endl;

  cout<<"Amount of letters in message :\n "<<endl;
  cout<<"a : "<<letterCount[0]<<"\t\tn : "<<letterCount[13]<<endl;
  cout<<"b : "<<letterCount[1]<<"\t\to : "<<letterCount[14]<<endl;
  cout<<"c : "<<letterCount[2]<<"\t\tp : "<<letterCount[15]<<endl;
  cout<<"d : "<<letterCount[3]<<"\t\tq : "<<letterCount[16]<<endl;
  cout<<"e : "<<letterCount[4]<<"\t\tr : "<<letterCount[17]<<endl;
  cout<<"f : "<<letterCount[5]<<"\t\ts : "<<letterCount[18]<<endl;
  cout<<"g : "<<letterCount[6]<<"\t\tt : "<<letterCount[19]<<endl;
  cout<<"h : "<<letterCount[7]<<"\t\tu : "<<letterCount[20]<<endl;  
  cout<<"i : "<<letterCount[8]<<"\t\tv : "<<letterCount[21]<<endl;
  cout<<"j : "<<letterCount[9]<<"\t\tw : "<<letterCount[22]<<endl;
  cout<<"k : "<<letterCount[10]<<"\t\tx : "<<letterCount[23]<<endl;
  cout<<"l : "<<letterCount[11]<<"\t\ty : "<<letterCount[24]<<endl;
  cout<<"m : "<<letterCount[12]<<"\t\tz : "<<letterCount[25]<<endl;
  cout<<endl;

  double freqA=(double)letterCount[0]/noSpacesLength;
  double freqB=(double)letterCount[1]/noSpacesLength;
  double freqC=(double)letterCount[2]/noSpacesLength;
  double freqD=(double)letterCount[3]/noSpacesLength;
  double freqE=(double)letterCount[4]/noSpacesLength;
  double freqF=(double)letterCount[5]/noSpacesLength;
  double freqG=(double)letterCount[6]/noSpacesLength;
  double freqH=(double)letterCount[7]/noSpacesLength;
  double freqI=(double)letterCount[8]/noSpacesLength;
  double freqJ=(double)letterCount[9]/noSpacesLength;
  double freqK=(double)letterCount[10]/noSpacesLength;
  double freqL=(double)letterCount[11]/noSpacesLength;
  double freqM=(double)letterCount[12]/noSpacesLength;
  double freqN=(double)letterCount[13]/noSpacesLength;
  double freqO=(double)letterCount[14]/noSpacesLength;
  double freqP=(double)letterCount[15]/noSpacesLength;
  double freqQ=(double)letterCount[16]/noSpacesLength;
  double freqR=(double)letterCount[17]/noSpacesLength;
  double freqS=(double)letterCount[18]/noSpacesLength;
  double freqT=(double)letterCount[19]/noSpacesLength;
  double freqU=(double)letterCount[20]/noSpacesLength;
  double freqV=(double)letterCount[21]/noSpacesLength;
  double freqW=(double)letterCount[22]/noSpacesLength;
  double freqX=(double)letterCount[23]/noSpacesLength;
  double freqY=(double)letterCount[24]/noSpacesLength;
  double freqZ=(double)letterCount[25]/noSpacesLength;

  
  cout<<"The frequency of each letter in the message :"<<endl;
  cout<<endl;

  const int size = 26;
  double measuredFrequency[size] = {freqA, freqB, freqC, freqD, freqE, freqF, freqG, freqH, freqI, freqJ,freqK, freqL, freqM, freqN, freqO, freqP,freqQ, freqR, freqS, freqT, freqU, freqV, freqW, freqX, freqY, freqZ};


  char letters[size] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  selectionSort(measuredFrequency, letters, size);

      
  for (int i = 0; i < size; i++) {
      cout << letters[i] << " : " << measuredFrequency[i] << endl;
  }


  double realFreqE = 0.1270;
  double realFreqT = 0.0906;
  double realFreqA = 0.0817;
  double realFreqO = 0.0751;
  double realFreqI = 0.0697;
  double realFreqN = 0.0675;
  double realFreqS = 0.0633;
  double realFreqH = 0.0609;
  double realFreqR = 0.0599;
  double realFreqD = 0.0425;
  double realFreqL = 0.0403;
  double realFreqC = 0.0278;
  double realFreqU = 0.0276;
  double realFreqM = 0.0241;
  double realFreqW = 0.0236;
  double realFreqF = 0.0223;
  double realFreqG = 0.0202;
  double realFreqY = 0.0197;
  double realFreqP = 0.0193;
  double realFreqB = 0.0150;
  double realFreqV = 0.0098;
  double realFreqK = 0.0077;
  double realFreqJ = 0.0015;
  double realFreqX = 0.0015;
  double realFreqQ = 0.0010;
  double realFreqZ = 0.0007;

  


  double realFrequency[size] = {realFreqE, realFreqT, realFreqA, realFreqO, realFreqI, realFreqN, realFreqS, realFreqH, realFreqR, realFreqD, realFreqL, realFreqC, realFreqU, realFreqM, realFreqW, realFreqF, realFreqG, realFreqY, realFreqP, realFreqB, realFreqV, realFreqK, realFreqJ, realFreqX, realFreqQ, realFreqZ};

  char lettersActual[size] = {'e', 't', 'a', 'o', 'i', 'n', 's', 'h', 'r', 'd', 'l', 'c', 'u', 'm', 'w', 'f', 'g', 'y', 'p', 'b', 'v', 'k', 'j', 'x', 'q', 'z'};

  selectionSort(realFrequency, lettersActual, size);


  cout<<endl;
  
  cout<<"The frequency of each letter in the alphabet:"<<endl;
  for (int i = 0; i < size; i++){
    cout << lettersActual[i] << " : " << realFrequency[i] << endl;
  }

  char substitution[26];
  for (int i = 0; i < size; i++ ){
    substitution[letters[i] -'a'] = lettersActual[i];
  }


  for (int i = 0; message[i] != '\0'; i++){
    if (message[i] >= 'a' && message[i] <= 'z'){
      switch (message[i]){
        case 'a':
        message[i] = substitution[0];
          break;
        case 'b':
        message[i] = substitution[1];
          break;
        case 'c':
        message[i] = substitution[2];
          break;
        case 'd':
        message[i] = substitution[3];
          break;
        case 'e':
        message[i] = substitution[4];
          break;
        case 'f':
        message[i] = substitution[5];
          break;
        case 'g':
        message[i] = substitution[6];
          break;
        case 'h':
        message[i] = substitution[7];
          break;
        case 'i':
        message[i] = substitution[8];
          break;
        case 'j':
        message[i] = substitution[9];
          break;
        case 'k':
        message[i] = substitution[10];
          break;
        case 'l':
        message[i] = substitution[11];
          break;
        case 'm':
        message[i] = substitution[12];
          break;
        case 'n':
        message[i] = substitution[13];
          break;
        case 'o':
        message[i] = substitution[14];
          break;
        case 'p':
        message[i] = substitution[15];
          break;
        case 'q':
        message[i] = substitution[16];
          break;
        case 'r':
        message[i] = substitution[17];
          break;
        case 's':
        message[i] = substitution[18];
          break;
        case 't':
        message[i] = substitution[19];
          break;
        case 'u':
        message[i] = substitution[20];
          break;
        case 'v':
        message[i] = substitution[21];
          break;
        case 'w':
        message[i] = substitution[22];
          break;
        case 'x':
        message[i] = substitution[23];
          break;
        case 'y':
        message[i] = substitution[24];
          break;
        case 'z':
        message[i] = substitution[25];
          break;
  
        
        default : 
          break;
  
      }
    }
  }
  cout<<endl;
  cout << "Decrypted message first round :\n\n" << message << endl;
  
  
  
  for (int i = 0; message[i] != '\0'; i++){
    if (message[i] >= 'a' && message[i] <= 'z'){
      switch (message[i]){
        case 'b':
        message[i] = 'k';
          break;
        case 'f':
        message[i] = 'u';
          break;
        case 'g':
        message[i] = 'y';
          break;
        case 'i':
        message[i] = 'o';
          break;
        case 'j':
        message[i] = 'v';
          break;
        case 'k':
        message[i] = 'w';
          break;
        case 'n':
        message[i] = 'i';
          break;
        case 'o':
        message[i] = 'n';
          break;
        case 'p':
        message[i] = 'g';
          break;
        case 'u':
        message[i] = 's';
          break;
        case 'v':
        message[i] = 'x';
          break;
        case 'w':
        message[i] = 'p';
          break;
        case 'x':
        message[i] = 'z';
          break;
        case 'y':
        message[i] = 'b';
          break;
        case 'z':
          break;


        default : 
          break;

      }
    }
  }

  
  cout<<endl;
  cout << "Decrypted message:\n\n" << message << endl;
  
  

  return 0;
}


void selectionSort(double* const array, char* const letters, const int size) {
    int largest;
    for (int i = 0; i < size - 1; i++) {
        largest = i;

        for (int j = i + 1; j < size; j++) {
            if (array[j] > array[largest]) {
                largest = j;
            }
        }
        swap(array[i], array[largest]);
        swap(letters[i], letters[largest]);
    }
}
void swap(double& p1, double& p2) {
      double temp = p1;
      p1 = p2;
      p2 = temp;
}

void swap(char& p1, char& p2) {
      char temp = p1;
      p1 = p2;
      p2 = temp;
}