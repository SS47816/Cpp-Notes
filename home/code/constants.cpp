#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;
    
enum class CPUStates{
    S_USER,
    S_NICE,
    S_SYSTEM,
    S_IDLE,
    S_IOWAIT,
    S_IRQ,
    S_SOFTIRQ,
    S_STEAL,
    S_GUEST,
    S_GUEST_NICE
};

class Path{
    public:
        static string basePath() 
        {
            return "/proc/";
        }
        static string cmdPath()
        {
            return "/cmdline";
        }
        static string statusPath()
        {
            return "/status";
        }
        static string statPath()
        {
            return "stat";
        }
        static string upTimePath()
        {
            return "uptime";
        }
        static string memInfoPath()
        {
            return "meminfo";
        }
        static string versionPath()
        {
            return "version";
        }
};

int main() 
{   
    std::cout << "listing: " + Path::basePath() << std::endl;
    std::string command = "ls " + Path::basePath();
    int n = command.length();  
    char char_command[n+1];  
    strcpy(char_command, command.c_str());  
    std::system(char_command);
}
