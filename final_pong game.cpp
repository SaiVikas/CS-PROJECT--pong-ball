#include<simplecpp>
void pauseb()
{
    Text pause(100,100,"click any where to resume");
    getClick();                           //function for resuming when paused

}



main_program
{
    initCanvas("Pong Ball",700,700);
    int v;
    for(int f=0; f<8888; f++)               //creating the home page of the game
    {
l:
        Rectangle bkgrd(350,350,701,701);
        bkgrd.setFill();
        bkgrd.setColor(COLOR(16,24,32));
        Rectangle play(350,240,190,40);
        play.setFill();
        play.setColor(COLOR(255,255,255));
        Text playgame(350,240,"Play Game");   //to start the game
        Rectangle inst(350,350,190,40);
        inst.setFill();
        inst.setColor(COLOR(255,255,255));
        Text instr(350,350,"Instructions");   //to guide players
        Rectangle exit(350,460,190,40);
        exit.setFill();
        exit.setColor(COLOR(255,255,255));
        Text exits(350,460,"Exit");           //to exit the game


        int clickPos=getClick();
        int cx=clickPos/65536;
        int cy=clickPos%65536;




        if(cx>255&&cx<445&&cy>220&&cy<260)   //on starting the newgame
            //displaying the various levels of the game
        {
            playgame.hide();
            instr.hide();
            exits.hide();

            bkgrd.hide();
            play.hide();
            inst.hide();
            exit.hide();
            Rectangle bkgrod(350,350,701,701);
            bkgrod.setFill();
            bkgrod.setColor(COLOR(16,24,32));
            Rectangle R1(350,190,150,60);
            R1.setFill();
            R1.setColor(COLOR( 255,255,255));
            Text t1(350,190,"BEGINNER");          //the biginner level
            Rectangle R2(350,300,150,60);
            R2.setFill();
            R2.setColor(COLOR(255,255,255));
            Text t2(350,300,"INTERMEDIATE");     //the intermediate level
            Rectangle R3(350,410,150,60);
            R3.setFill();
            R3.setColor(COLOR(255,255,255));
            Text t3(350,410,"EXPERT");           //the expert level

            int clickPos=getClick();
            int cx=clickPos/65536;
            int cy=clickPos%65536;




            if(cx>275&&cx<425 && cy>160&&cy<220)

            {
                t1.hide();
                t2.hide();
                t3.hide();

                bkgrd.hide();
                R1.hide();
                R2.hide();
                R3.hide();
                v=6;
                goto m;                 //direct the program to the game code
            }

            else if(cx>275&&cx<425 && cy>270&&cy<330)
            {
                t1.hide();
                t2.hide();
                t3.hide();

                bkgrd.hide();
                R1.hide();
                R2.hide();
                R3.hide();
                v=6.5;
                goto m;                 //direct the program to the game code

            }
            else if(cx>275&&cx<425 && cy>380&&cy<440)
            {
                t1.hide();
                t2.hide();
                t3.hide();

                bkgrd.hide();
                R1.hide();
                R2.hide();
                R3.hide();
                v=7;
                goto m;                 //direct the program to the game code
            }
            wait(3);
        }


        for(int s=0; s<8888; s++)
        {
            if(cx>255&&cx<445&&cy>322&&cy<378)
            {
                playgame.hide();
                instr.hide();
                exits.hide();

                bkgrd.hide();
                play.hide();
                inst.hide();
                exit.hide();
                Rectangle bkgrud(350,350,700,701);       //instructions for the game
                bkgrud.setFill();
                bkgrud.setColor(COLOR(16,24,32));
                Rectangle insti(250,250,400,50);
                insti.setFill();
                insti.setColor(COLOR(255,255,255));
                Text instruc(250,250,"PLAYER 1:'A' for up and 'Z' for down");  //for player-1
                Rectangle ins(250,350,400,50);
                ins.setFill();
                ins.setColor(COLOR(255,255,255));
                Text in(250,350,"PLAYER 2:'K' for up and 'M' for down");   //for player-2
                Rectangle pau(250,450,400,50);
                pau.setColor(COLOR(255,255,255));
                pau.setFill();
                Text pa(250,450,"Press key 'P' to pause the game");       //pause instruction
                Rectangle bk1(100,150,100,50);
                bk1.setFill();
                bk1.setColor(COLOR(255,255,255));
                Text bak1(100,150,"BACK");
                int clickPos=getClick();                                  //back to home page
                int cn=clickPos/65536;
                int cm=clickPos%65536;
                if(cn>50&&cn<150&&cm>125&&cm<175)
                {
                    goto l;                 //directing to the homepage
                }
            }
        }
        if(cx>255&&cx<445&&cy>432.5&&cy<487.5)
        {
            break;                  //to exit the game

        }

m:
        class ball
        {
        public:
            float bx,by;
        };                            //to trace the co-ordinates of the ball
        class paddle
        {
        public:
            float x,y;
        };                           //to  trace the co-ordinates of the paddle
        paddle p1,p2;
        ball b;
        int scorep1=0,scorep2=0;
        p1.y=350;
        p2.y=350;
        b.bx=20;
        b.by=350;                    //initializing coordinates of paddles of the players
        p1.x=5;
        p2.x=695;



        Rectangle r(350,350,701,701);
        r.setColor(COLOR(16,24,32));
        r.setFill();                   //background of the game
        Rectangle r1(5,p1.y,10,60);
        r1.setColor(COLOR(255,255,255));
        r1.setFill();                    //creating the 1st paddle
        Rectangle r2(695,p2.y,10,60);
        r2.setColor(COLOR(255,255,255));
        r2.setFill();                    //creating the 2nd paddle

        Circle c(b.bx, b.by,10);
        c.setColor(COLOR(255,255,255));
        c.setFill();                     //to create the ball
        Line l1(350, 0, 350, 25);
        Line l2(350, 50, 350, 75);
        Line l3(350, 100, 350, 125);
        Line l4(350, 150, 350, 175);
        Line l5(350, 200, 350, 225);
        Line l6(350, 250, 350, 275);
        Line l7(350, 300, 350, 325);
        Line l8(350, 350, 350, 375);
        Line l9(350, 400, 350, 425);
        Line l10(350, 450, 350, 475);       //for creating the dividing line
        Line l11(350, 500, 350, 525);
        Line l12(350, 550, 350, 575);
        Line l13(350, 600, 350, 625);
        Line l14(350, 650, 350, 675);


        for(int i=0; i<10; i++)           //to make the game run till one player wins the game
        {

            Text t1(200,50,scorep1);
            Text t2(500,50,scorep2);
            r1.moveTo(5,350);        //intial positions of the paddle after scoring a point
            r2.moveTo(695,350);
            c.moveTo(20,350);
            b.bx=20;
            b.by=350;
            p1.x=5;
            p1.y=350;
            p2.x=695;
            p2.y=350;
            int dir=1;
            int velx=v+(i/2),vely=v+(i/3);   //intialising the velocity of the ball

            while(true)
            {


a:                               //for the motion of the ball in up-left direction
                if (dir == 1)
                {


                    if( b.bx < p1.x + 15 &&  p1.y-40<b.by && b.by<p1.y+40)
                    {
                        dir=2;
                        goto b;      //checks coordinates of paddle and ball reflects if it matches
                    }
                    else if((b.bx<p1.x+15) && ((10<b.by&&b.by<p1.y-40)||(p1.y+40<b.by&&b.by<690)))
                    {
                        scorep2++;

                        break;       //checks coordinates of paddle and give score to other player if it doesn't match

                    }

                    else if(b.by<10)
                    {
                        dir=4;
                        goto d;       //reflects at top wall
                    }

                    else
                    {
                        c.move(-velx, -vely);
                        b.bx-=velx;
                        b.by-=vely;   //original path for direction mentioned
                    }
                }
b:                               //for the motion of the ball in up-right direction
                if(dir == 2 )
                {
                    if( b.bx > p2.x - 15 && p2.y-40<b.by &&
                    b.by<p2.y+40)
                    {
                        dir=1;
                        goto a;       //checks coordinates of paddle and ball reflects if it matches
                    }
                    else if(b.bx > p2.x - 15 && ((10<b.by&&b.by<p2.y-40)||(p2.y+40<b.by&&b.by<700)))
                    {
                        scorep1++;

                        break;        //checks coordinates of paddle and give score to other player if it doesn't match

                    }
                    else if(b.by<10)
                    {
                        dir=3;
                        goto c;      //reflects at top wall
                    }
                    else
                    {
                        c.move(velx, -vely);
                        b.bx+=velx;             //original path for direction mentioned
                        b.by-=vely;
                    }



                }
c:                               //for the motion of the ball in down-right direction

                if (dir == 3)
                {
                    if( b.bx + 15 > p2.x &&  p2.y-40<b.by+10 && b.by<p2.y+40)
                    {
                        dir=4;
                        goto d;        //checks coordinates of paddle and ball reflects if it matches
                    }
                    else if( b.bx + 15 > p2.x &&  ((10<b.by&&b.by<p2.y-40)||(p2.y+40<b.by&&b.by<700)))
                    {
                        scorep1++;

                        break;         //checks coordinates of paddle and give score to other player if it doesn't match

                    }
                    else if(b.by>690)
                    {
                        dir=2;
                        goto b;          //reflects at bottom wall

                    }
                    else
                    {
                        c.move(velx, vely);
                        b.bx+=velx;              //original path for direction mentioned
                        b.by+=vely;
                    }

                }
d:                               //for the motion of the ball in down-left direction

                if (dir == 4)
                {
                    if( b.bx - 15 < p1.x && p1.y-40<b.by&&b.by<p1.y+40)
                    {
                        dir=3;
                        goto c;            //checks coordinates of paddle and ball reflects if it matches
                    }
                    else if(b.bx - 15 < p1.x && ((10<b.by&&b.by<p1.y-40)||(p1.y+40<b.by&&b.by<690)))
                    {
                        scorep2++;

                        break;                 //checks coordinates of paddle and give score to other player if it doesn't match

                    }
                    else if(b.by>690)
                    {
                        dir=1;
                        goto a;             //reflects at bottom wall
                    }
                    else
                    {
                        c.move(-velx, vely);
                        b.bx-=velx;           //original path for direction mentioned
                        b.by+=vely;
                    }

                }






                bool movep1_up = false;
                movep1_up =GetAsyncKeyState('Z');
                if(movep1_up==true)
                {
                    p1.y+=10;
                    r1.moveTo(p1.x,p1.y);
                }

                bool movep1_down = false;
                movep1_down=GetAsyncKeyState('A');
                if(movep1_down==true)
                {
                    p1.y-=10;
                    r1.moveTo(p1.x,p1.y);        //function to move paddles simultaneously
                }

                bool movep2_up = false;
                movep2_up=GetAsyncKeyState('M');
                if(movep2_up==true)
                {
                    p2.y+=10;
                    r2.moveTo(p2.x,p2.y);
                }

                bool movep2_down = false;
                movep2_down=GetAsyncKeyState('K');
                if(movep2_down==true)
                {
                    p2.y-=10;
                    r2.moveTo(p2.x,p2.y);
                }

                bool pause=false;
                pause=GetAsyncKeyState('P');        //to pause the game
                if(pause==true)
                {
                    pauseb();
                }

                if(p1.y>=670)
                {
                    p1.y=670;
                }
                if(p2.y>=670)
                {
                    p2.y=670;                //avoids paddle going out of window
                }
                if(p1.y<=30)
                {
                    p1.y=30;
                }
                if(p2.y<=30)
                {
                    p2.y=30;
                }

            }

            wait(1);
            if(scorep1>4||scorep2>4)
            {
                t1.hide();
                t2.hide();
                Text d1(200,50,scorep1);
                Text d2(500,50,scorep2);

                if(scorep1==5)
                {
                    Text f1(350,350,"Player 1 WON");
                    wait(3);
                }
                if(scorep2==5)             //breaks the program when one of the players score highest(5) points
                {
                    Text f2(350,350,"Player 2 WON");
                    wait(3);
                }
                wait(1);
                break;
            }
        }
        cout<<"score of player 1: "<<scorep1<<endl;
        cout<<"score of player 2: "<<scorep2<<endl;
    }

}




