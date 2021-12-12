#include<iostream>
using namespace std;
class Media
{
	protected:
		string Title;
		
		float Rating;
		public:
			Media(string s,float r){
				Title=s;
				Rating=r;
				
			}
			virtual void display(){	}
};
class MediaVideo:public Media{
	float Videolength;
	public:
		MediaVideo(string s,float r,float vl):Media(s,r){
			Videolength=vl;
		}
		void display(){
			cout<<"The video length is:"<<Title<<endl;
			cout<<"Ratig:"<<Rating<<" out of 5 stars"<<endl;
			cout<<"Length of video is:"<<Videolength<<"minutes"<<endl;
			
		}
};
class MediaText:public Media{
	int VideoText;
	public:
		MediaText(string s,float r,int vt):Media(s,r){
		
		
			VideoText=vt;
		}
		void display(){
			cout<<"The Text toutorials length is:"<<Title<<endl;
			cout<<"Ratig:"<<Rating<<" out of 5 stars"<<endl;
			cout<<"Number of words in Text toutorials are:"<<VideoText<<"words"<<endl;
			
		}
};
int main(){
	string Title;
	float Rating,Videolength;
	int VideoText;
	//Video Section
	Title="C++videos tou.";
	Videolength=5.5;
	Rating=4.9;
	MediaVideo djVideo(Title,Rating,Videolength);
	//Text Section
	Title="C++Text tou.";
	VideoText=900;
Rating=4.95;
	
	MediaText djText(Title,Rating,VideoText);
	Media *tuts[2];
	tuts[0]=&djVideo;
	tuts[1]=&djText;
	tuts[0]->display();
	tuts[1]->display();
	return 0;

	

}
