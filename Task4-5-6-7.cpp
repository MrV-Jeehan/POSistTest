#include<bits/stdc++.h>
#include <sys/time.h>
using namespace std;

unsigned long long getCurrentTime(){
	struct timeval tv;
	gettimeofday(&tv, NULL);
	unsigned long long millisecondsSinceEpoch =
    	(unsigned long long)(tv.tv_sec) * 1000 +
    	(unsigned long long)(tv.tv_usec) / 1000;
    return millisecondsSinceEpoch;
}

class Hash{
public:
	int ownerId;
	int value;
	string name;
	Hash(){
	}
	Hash(int o,int v,string n){
		ownerId = o;
		value = v;
		name = n;
	}
};

class Data{
public:
	int ownerId;
	int value;
	string ownerName;
	Hash h;
	Data(int o,int v,string n,Hash h1){
		ownerId = o;
		value = v;
		ownerName = n;
		h = h1;
	}
};

class RecordNode{
public:
	unsigned long long timeStamp;
	string data;
	int nodeNumber;
	string nodeId;
	RecordNode* referenceNodeId;
	vector<RecordNode*> childReferenceNodeId;
	RecordNode* genesisReferenceNodeId;
	string hashValue;
	
	/**
	string getHash(int h){
		string ch;
		for(auto i = childReferenceNodeId.begin();i!=childReferenceNodeId.end();i++){
			ch += to_string(*i);
		}
		return to_string(timeStamp) 
				+ to_string(data) 
				+ to_string(nodeNumber) 
				+ to_string(nodeId) 
				+ to_string(referenceNodeId) 
				+ to_string(genesisReferenceNodeId)
				+ ch
				+ to_string(h);  
	}	**/
		
	RecordNode(Data d,int nnum,RecordNode* ref,RecordNode* gen,int hashKey){
		timeStamp = getCurrentTime();
		//data = getHashedData(d);
		nodeNumber = nnum;
		nodeId = to_string(nodeNumber);
		referenceNodeId = ref;
		genesisReferenceNodeId = gen;
		//hashValue = getHash(hashKey);	
	}
};

int main(){
		
	return 0;
}
