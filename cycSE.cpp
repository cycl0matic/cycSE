#include "cySE.h"
using namespace std;

int inputmanage(char* input, Trienode* trie, Mymap* mymap)
{
  char* token = strtok(input, "  ");
  if(!strcmp(token, "/search"))
  {
    search(token,trie,map,k);
  }
  else if(!strcmp(token, "/df")){
    df(trie);
  }
  else if(!strcmp(token, "/tf")){
    
    if(tf(token, trie == -1)){
      return -1;
    }
  }
  else if(!strcmp(token, "/exit")){
    cout<<"exiting ..."<<endl;
    token =NULL;
    free(token);
    return 2;
  }
  else{
    return -1;
  }

  token = NUll;
  free(token);
  return 1;
}

int main(int argc, char **argv){
  if(argc !=5 || strcmp(argv[1],"-d") || strcmp(argv[3], "-k")){
    cout<<"wrong arguments"<<endl;
    return -1;
  }
  cout<<"Please wait a minute ... "<<endl;
  int linecounter = 0;
  int maxlength = -1;
  int k = atoi(argv[4]);
  if(read_sizes(&linecounter, &maxlength, argv[2])== -1)
  {
    return -1;
  }

  Mymap *mymap = new Mymap(linecounter, maxlength);
  Trienode* trie = new Trienode();
  if(read_input(mymap,trie, argv[2]) == -1){
    delete(mymap);
    return -1;
  }
  cout<<"Initialization finished"<<endl;
  cout<<"Dataset is ready"<<endl;
  for(int i =0; i <mymap -> getsize() ;i++){
    mymap -> print(i);
  } 
  char* input =NULL:
  size_t input_length = 0;
  while(1){
    getline(&input,&input_length, stdin);
    int ret = inputmanage(input,trie,mymap,k)

    if(ret == -1){
      cout<<"Wrong input"<<endl;
    }
    else if(ret == 2){
      free(input);
      break;
    }

    free(input);
    input_length = 0;
  }
  delete(mymap);
  delete(trie);
  return 1;
}
