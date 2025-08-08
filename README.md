# Blithe-Corne-Keymap
My custom QMK keymap for the [Corne keyboard by Foostan](https://github.com/foostan/crkbd). Canary Matrix layout with a BEAKL-15 inspired symbol layer. Also has some custom OLED design for each layer.

Skip To:

[Info About The Keymap](#about-the-keymap)

[How to Use](#how-to-use)
# How To Use
This will run through how to get the blithe keymap on a crkbd, it will go through the dependencies you need, how to [flash it to your board](#flashing-your-board) and how to [compile a new hex file](#compiling-the-hex-file) if you make changes to the default.

## Flashing Your Board
The microcontrollers on your boards need to be flashed with the keymap so they can detect what the key presses mean. To do this you will need the qmk toolbox tool which can be downloaded [here](https://github.com/qmk/qmk_toolbox). 

After downloading and opening the toolbox you need to select the file that gets flashed to the board, for this we press open then need to select the blithe.hex file. You can compile the file yourself in this [section](#compiling-the-hex-file) if you want, or if you make changes to the default files.
<img width="924" height="163" alt="image" src="https://github.com/user-attachments/assets/8de0f34e-d5cd-400d-8151-770485a8b902" />

Alongside selecting the file you need to select your MCU, that can be down with the drop down window to the right of 'open'. Mine is already set to ATmega32U4 so I don't have to change it. 
<img width="927" height="135" alt="image" src="https://github.com/user-attachments/assets/c93c1e8c-ef4b-493b-b6cf-d89fa9a4be02" />

Now you can plug the the master side into the computer. 
*The default master is the right side, if you want the left as master you will need to change the CONFIG.H file adn then [re-compile the hex file](#compiling-the-hex-file).*

After plugging in you need to get the board into bootloader mode, to do this you will need to hit the reset switch on the board, or you can try [some of these methods to load into bootloader mode](https://docs.qmk.fm/newbs_flashing)

Toolbox should notify you that it was detected and you will be able to hit the flash button. Alternatively you can check the auto-flash button and as soon as it enters bootloader mode it will flash.  (*NEEDS PICTURES*)

When it's done flashing it will say so and then you can plug the usb cable into the slave side of the board (this will be the left as default unless the CONFIG.H file is changed) and flash that board as well. 

Once both sides are done flashing you can unplug the slave side, connect both halves with the TRSS cable and plug the usb into the master side.

The board should be functioning perfectly now with the Blithe keymap, enjoy :)

If however you don't like the default blithe keymap, make changes to the CONFIG file or change OLED icons you will need to compile your own .hex file which I will cover how to [here](#compiling-the-hex-file)
## Compiling The Hex File
If you make changes to any of the files in the blithe folder then you will need to recompile the files into a new .hex file so that version can be flashed to the board. 

To do this you first need to download QMK MSYS, this can be done here: https://msys.qmk.fm/





# About The Keymap 
<details>
<summary>Information about the keymap choices.</summary>
Skip To: 

[What Keyboard Layout It Uses (Canary)](#canary-layout)

[Modifier and Thumb Cluster Picking](#placement-of-modifier-and-layer-keys)

[Number Layer](#number-layer)

[Symbol Layer](#symbol-layer)

[Function Layer](#function-layer)

[OLED Screeen and Display](#oled-screen)
  
## Canary Layout
This keyboard ditches the default qwerty layout for the Canary layout. 

Canary is a layout that is a branch off of Colemak-DH. It's a compilation of different ideas and optimizationg strategies from the alternative keyboard layout community. 

There is 2 different Canary layouts and for my Crkbd I am using the Canary Matrix verion. 

### Canary Matrix
The matrix version is designed for ortho-linear boards that have keys placed in a perfect grid to fix the disadvantages of the stagger with a normal keyboard. 

This is the exact layout: 

<img width="559" height="152" alt="image" src="https://github.com/user-attachments/assets/33823844-60a3-4572-b020-404ca6bf7eee" />

I picked Canary since:
- has a high roll count (55% of trigrams are rolls) which makes typing more flowy. 
- less pinky load by limiting the pinky to ~0% SFB's and decreasing redirects by arranging the vowels in a better way.
- similar to colemak-dh, even tho I am switching from qwerty and not colemak, if I decide to switch to colemak it will be way easier.

## Placement of Modifier and Layer Keys. 
### Outer Columns
My Corne board is a 3x6, so in addition to the 5 columns on each side for letters we can have an outer column on each hand for modifier keys like on a regular keyboard.

For the left: 
I chose to keep shift and ctrl since I play games and those buttons are used a lot. A regular board has caps lock but I never use it so I didn't include it here. Last 2 keys are tab and esc and I already wanted tab on my thumb key (*LINK*) so I kept escape. 

On the right: 
I kept Enter(STC) and Alt since those are used frequently. I also needed a key for my function layer which would hold the F keys and other misc, which I put in the bottom right (*LINK*). 

<img width="673" height="191" alt="image" src="https://github.com/user-attachments/assets/4f38f85e-7084-45ae-8f42-0a9d20628a66" />

### Thumb Clusters 
One of the key features of the crkbd is the 2 clusters of 3 keys that your thumbs can hit. These are for the most used and most important keys. 

My left thumb cluster holds: 
- Windows key as well as the key for my numbers layer.
- CTRL mod key.
- Space when pressed and tab when held. This puts space at the easiest spot to hit. *Here tab might be switched with enter since holding doesn't allow for smooth repition that tab would need like in coding.

My right thumb cluster holds: 
- Backspace, this makes the key much easier to press and could allow for easier combo for CTRL + BSPC which is frequently used.
- Shift mod key.
- Key held for my Symbol layer.

<img width="681" height="227" alt="image" src="https://github.com/user-attachments/assets/38f87fc2-bca8-4ac1-8120-45f74e2dac78" />

## Number Layer
Normal keyboards have a row above the letters that house the numbers and most symbols. The Corne board only has 3 rows so it can't have a row for numbers on the home layer. 
The solution for this is to have a layer key. My number layer key is located on the left thumb key in the left thumb cluster.

Originally I wanted a numpad on this layer but because of the crkbd having 3 rows only this would leave the 0 key having to be off in a weird column. This would've also meant having the numpad be 
completely one hand dominant which I didn't really want. 
Instead I just decided on a straight 1-0 line on the homerow that way it's not only on the home row which are easier to hit but also spreads the numbers out on both hands.

The last bits of the number layer are the operation signs which are in the same spot they are in the symbol layer so it's easier to learn. 
Lastly period and comma are in the same spot as they are in the base layer. 

<img width="659" height="240" alt="image" src="https://github.com/user-attachments/assets/2524c8fc-72bc-488c-92a5-02e78aaaf60c" />

## Symbol Layer 
Normal keyboard will have most symbols layered with the number layer. However a Corne board only has 3 rows, so it has no number row. Since our number row is similar to how numbers are
on a default layer we could just have some symbols under those (either shift activated or on their own layer) however this would force us to fit the other symbols around them and will cause symbols 
to not be in efficient spots to hit. 

Although this layer is a combination of a bunch of different options it takes main inspiration from the BEAKL 15 symbol layout. (*NEEDS LINK*)

<img width="670" height="246" alt="image" src="https://github.com/user-attachments/assets/ff2b8138-9375-46c0-986b-38414a2fffb8" />

The BEAKL layout uses an effort grid that shows the ease of pressing a certain kid, and it bases the placement of keys off of this grid. 
Although this 

The BEAKL 15 layout has a 3x3 backbone home block like a numpad, this makes it good for opening and closing symbols like ()[]{}<>. 
  
I did move around some of the BEAKL 15 symbols just to place them in places I found more favorable like moving the colons around and moving the arithmetic symbols.

I clustered the math symbols close together on the bottom row so I can repeat them in the number layer. 

Besides moving around symbols I also added some since the BEAKL 15 layout didn't include symbols like exclamation and question mark. I filled these in with the remaining slots mostly by trying to keep familiarty
with the standard layout with ! in the top left and ? in the bottom right. 
*These could be changed and moved around whether I find the effort grid more important or the familiarity from qwerty more important. Anyway using this should also feel free to make improvements based on what you like and prefer.*


## Function Layer
At this point most keys have been plotted in a layer on the board. However there are some keys that may be useful and important to have. These will be housed in the function layer that is activated by holding 
the key on the bottom right of the board. 

Firstly I felt the need to have the function keys (F1-12) on this layer. Just like the number layer I took inspiration from this [layout](https://configure.zsa.io/ergodox-ez/layouts/mnNX/latest/1)
and decided to have them in a straight line on the top row. Having them on the top row makes it more familiar to the standard layout and also ensures I have to go out of my way to hit them.

Second I decided to have the arrow keys since they are useful if you want to be efficient and not take your hands off the keyboard for something like text editing. Since this keyboard will be used for programming and typing a decent amount I find this neccessary. 

I also decided to duplicate this setup on both halves so each hand has their own set of arrow keys.

*Where the keys are right now is actually not the best according to the BEAKL effort grid since 3 will have a value above 1. I can make it better by shifting it up, however the F keys are there so I might change the F keys to the bottom row so that the arrow keys will be in a spot that is better to press. Moving it up a row will make 3/4 keys have a value of .5 instead of 1+.*

I then have page up and page down keys near the arrow keys just in case I need it. Page up and down are similar to the arrow keys since they make navigating easier. Although not used a lot I still put in the print screen key since I do use it once in a while, the same goes for the Caps Lock key.

<img width="671" height="284" alt="image" src="https://github.com/user-attachments/assets/f854a603-7de5-4f49-8733-301928bea49f" />

## OLED Screen
The corne v3 PCB allows for an OLED screen to be soldered on. Although this screen is small it can still be used to display some graphics. I'm sure there are good ideas out there that people use like displaying WPM or battery life if using a wireless board however I simply only wanted to display what layer I am on. 

I didn't have any ideas for fancy graphics so I chose a simple 3 letter + examples approach:
- Number layer has 'NUM 1234'
- Symbol layer has 'SYM !@#$'
- Function layer simple has 'FN'

To make these I made a file in inkscape with the size of the OLED I had which was 128x32 pixels. I when filled in the image with what I wanted mainly just inserting text and typing. After exporting the image I uploaded it to this 
[website](https://javl.github.io/image2cpp/) That turns it into the plain bytes for the image which you can copy and paste for your QMK file. 

**Make sure you match the orientation of your OLED. For you the preview photo might look how you want but might not work on the OLED, when I had problems with this I just rotated 180 degress (preview looked upside down) and it worked perfectly on the OLED.** 

I also decided to add a graphic that shows up if caps lock is in, I simply chose a small arrow design. *I did make each layer image with space so that the caps lock image could be overlayed on top (ex. if I have the symbol layer active but also caps lock) however they don't overlay by default so if I do want this I will have to tweak it so they do overlay* 

Lastly I changed the image that shows up when I am on the home layer, by default it shows 'corne' however I felt that I could add a little more. For my personal one I have 'corne' in simple text but I also added the name of my keymap 'Blithe' right under it, not only that but there was a little more space so I added a little logo.

These are just what I wanted to have, however in the future if I get a good idea or want to take the time to learn how to make a nice animation I might add that. 

Only other change I made was that I change the timeout for the OLED to a couple seconds. I don't always need to display what layer I am on, just the second or so that I change to it. This will also decrease the likelihood or burning the screen. 
</details>
