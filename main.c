#include <gb/gb.h>
#include "courtyard.c"
#include "tiles_courtyard.c"
void main(){
    set_bkg_data(0, 19, tiles_courtyard);
    set_bkg_tiles(0, 0, 40, 18, courtyard);
    SHOW_BKG;
    DISPLAY_ON;
    while(1){
        switch(joypad()){
            case J_LEFT:
                scroll_bkg(-1,0);
                break;
            case J_RIGHT:
                scroll_bkg(1,0);
                break;
        }
    delay(50);
    }
}




// #include <stdio.h>
// #include "rogue.c"

// void main(){
//     UINT8 currentspriteindex = 0;

//     set_sprite_data(0, 2, Rogue);   /*Starts at the 0th tile, and grabs two tiles (so, tile 0 and 1), with the name "Rogue"*/
//     set_sprite_tile(0, 0);          /*Our tile is now the 0th sprite.*/
//     move_sprite(0, 88, 78);         /*The 0th sprite is now rendered at x88y78*/
//     SHOW_SPRITES;

//     while(1){
//         switch(joypad()){
//             case J_LEFT:            /*Don't use "if" for switches, use "case".*/
//                 scroll_sprite(0,-1,0);
//                 break;               /*"break" ends a "case" statement.*/
//             case J_RIGHT:
//                 scroll_sprite(0,1,0);
//                 break;
//             case J_UP:
//                 scroll_sprite(0,0,-1);
//                 break;
//             case J_DOWN:
//                 scroll_sprite(0,0,1);
//                 break;
//             }
//         delay(20);
//         }
//     }