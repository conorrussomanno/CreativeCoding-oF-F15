#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "particle.h"
#include "spring.h"
#include "web.h"

class testApp : public ofSimpleApp{
	
	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed  (int key);
		void keyReleased (int key);
		
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
        vector <web> webs;
    
        int mode;
        bool stretchWeb;		 
	
};

#endif
	
