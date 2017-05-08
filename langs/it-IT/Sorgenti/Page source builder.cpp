#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <sstream>

using namespace std;

int main() {
	string file;
	
	cout << "Write the file name and press Enter." << endl;
	getline(cin, file);
	
	ifstream f;
	
	string path = "Documenti/Progetti/Programmazione/Linguaggi di programmazione/HTML & CSS & JS (Websites)/Online Store/langs/it-IT/Sorgenti/Edo's ToolKit/";
    f.open(path+file);
    
    if (f) {
        string line;
        string filecontent;
        int linenumber_HTML = 1;
        
        
        filecontent.append("<h3><a name=\""+file+"\"></a>"+file+"</h3>\n");
        filecontent.append("<table align=\"center\" style=\"width: 1000px; border-collapse: collapse;\">\n");
        
        
        while (getline(f, line)){
			for (unsigned int i = 0; i < line.size(); i++) {
				if (line[i] == '	'){
					line.replace(i++, 1, "&nbsp;&nbsp;&nbsp;&nbsp;");
					i--;
				}
				else if (line[i] == ' ') {
					line.replace(i++, 1, "&nbsp;");
					i--;
				}
				else
					continue;
			}
			filecontent.append("	<tr>\n");
			filecontent.append("		<th class=\"lineNum\"> "+to_string(linenumber_HTML)+" </th><th class=\"code\"><code>"+line+"</code></th>\n");
			filecontent.append("	<tr>\n");
			linenumber_HTML++;
        }
        filecontent.append("<table>\n");
        f.close();
        
        cout << filecontent << endl;
    } else
		cout << "ERROR: Specified file does not exist or is unreadable." << endl;
	return 0;
}
