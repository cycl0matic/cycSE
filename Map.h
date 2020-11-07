#include<iostram>
#include<cstdlib>
#include<cstring>

#ifndef MAP_H
#define MAP_H

using namespace std;

class Mymap {
  // the number of documents
  int size;
  // length of the biggest document
  int buffersize;
  // each document
  char** dcuments;
  // length of each document
  int* lengths;

  public:
      Mymap(int size, int buffersize);
      ~Mymap();

      int insert(char* line, int i);

      void setlength(int id, int length){
        lengths[id] = length;
      }

      int getlength(int id){
        return lengths[id];
      }

      void print(int i){
        cout<<i<<" "<<documents[i]<<endl;
      }

      char* getDocument(int i){
        return documents[i];
      }

      const int getsize(){
        return size;
      }

      const int getbuffersize(){
        return buffersize;
      }
}

#endif