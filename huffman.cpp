#include<iostream>
#include<queue>
#include<string>
using namespace std;
struct node{
   int freq;
   char data;
   const node *child0, *child1;
   node(char d, int f = -1){ 
      data = d;
      freq = f;
      child0 = NULL;
      child1 = NULL;
   }
   node(const node *c0, const node *c1){ 
      data = 0;
      freq = c0->freq + c1->freq;
      child0=c0;
      child1=c1;
   }
   bool operator<( const node &a ) const { 
      return freq >a.freq;
   }
   void traverse(string code = "")const{
      if(child0!=NULL){
         child0->traverse(code+'0'); 
         child1->traverse(code+'1'); 
      }else{
         cout << "Data: " << data<< ", Frequency: "<<freq << ", Code: " << code<<endl;
      }
   }
};
void huffmanCoding(string str){
   priority_queue<node> qu;
   int frequency[256];
   for(int i = 0; i<256; i++)
      frequency[i] = 0; 
   for(int i = 0; i<str.size(); i++){
      frequency[int(str[i])]++; 
   }
   for(int i = 0; i<256; i++){
      if(frequency[i]){
         qu.push(node(i, frequency[i]));
      }
   }
   while(qu.size() >1){
      node *c0 = new node(qu.top()); 
      qu.pop();
      node *c1 = new node(qu.top()); 
      qu.pop();
      qu.push(node(c0, c1)); 
   }
   cout << "The Huffman Code: "<<endl;
   qu.top().traverse(); 
}
int main(){
   string str;
   cin>>str;
   huffmanCoding(str);
}