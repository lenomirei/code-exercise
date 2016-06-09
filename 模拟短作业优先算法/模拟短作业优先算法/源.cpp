#include<iostream>
#include<vector>
using namespace std;

//实现非抢占式的短作业优先算法（抢占式的叫做最短剩余时间算法）
struct process
{
	int processnum;
	int cometime;
	int runtime;
	bool isused;
	process(int processnumber,int come,int run)
		:cometime(come)
		,runtime(run)
		,isused(false)
		,processnum(processnumber)
	{

	}
	process()
		:isused(false)
	{

	}
};



void Sort(vector<process> mission)//排序前面的大后面的小
{
	for (int i = 0; i < mission.size(); ++i)
	{
		for (int j = 0; j < mission.size(); ++j)
		{
			if (mission[i].runtime < mission[j].runtime)
			{
				swap(mission[i].runtime, mission[j].runtime);
			}
		}
	}
}



void SPN(vector<process> mission)
{
	int timecount = mission[0].cometime + mission[0].runtime;
	vector<process> missonqueue;
	missonqueue.push_back(mission[0]);
	missonqueue.pop_back();
	while (1)
	{
		bool haiyoume = false;
		for (int i = 0; i < mission.size(); ++i)
		{
			if (mission[i].isused == false && mission[i].cometime <= timecount)
			{
				missonqueue.push_back(mission[i]);
				haiyoume = true;
			}
		}
		if (haiyoume == false)
		{
			break;
		}
		Sort(missonqueue);
		cout << missonqueue[missonqueue.size() - 1].processnum << endl;
		missonqueue.pop_back();
	}
}




void processinput(size_t number)
{
	vector<process> mission;
	mission.resize(number);
	for (int i = 0; i < number; ++i)
	{
		int processnumber;
		int cometime;
		int runtime;
		cin >> processnumber >> cometime >> runtime;
		mission[i].processnum = processnumber;
		mission[i].cometime = cometime;
		mission[i].runtime = runtime;
	}
	SPN(mission);
}






int main()
{
	int n;
	cin >> n;
	processinput(n);

	return 0;
}