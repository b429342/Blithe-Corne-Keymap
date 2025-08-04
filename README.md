# Blithe-Corne-Keymap
My custom QMK keymap for the Corne keyboard by Foostan. Canary Matrix layout with a BEAKL-15 inspired symbol layer. Also has some custom OLED design for each layer. 

Skip To: 
[What Keyboard Layout It Uses (Canary)](#canary-layout)
[Modifier and thumb cluster picking](#placement-of-modifier-and-layer-keys)
[](#)
[](#)

## Canary Layout
This keyboard ditches the default qwerty layout for the Canary layout. 

Canary is a layout that is a branch off of Colemak-DH. It's a compilation of different ideas and optimizationg strategies from the alternative keyboard layout community. 
There is 2 different Canary layouts and for my Crkbd I am using the Canary Matrix verion. 

### Canary Matrix
The matrix version is designed for ortho-linear boards that have keys placed in a perfect grid to fix the disadvantages of the stagger with a normal keyboard. 
This is the exact layout: 

<img width="590" height="150" alt="image" src="https://github.com/user-attachments/assets/953381d7-909b-4a54-9784-5300dc8af382" />
>[!NOTE]
> Ignore the symbols that would be shifted. For example , key will not become a < even if I hold shift. Those symbols are in another layer.
> The software to generate the image doesn't allow single symbol keys.

I picked Canary since:
- has a high roll count (55% of trigrams are rolls) which makes typing more flowy. 
- less pinky load by limiting the pinky to ~0% SFB's and decreasing redirects by arranging the vowels in a better way.
- similar to colemak-dh, even tho I am switching from qwerty and not colemak, if I decide to switch to colemak it will be way easier.

## Placement of Modifier and Layer Keys. 
### Outer Columns
My Corne board is a 3x6, so in addition to the 5 columns on each side for letters we can have an outer column on each hand for modifier keys like on a regular keyboard.

Left side was easiest to choose. I chose to keep shift and ctrl since I play games and those buttons are used a lot. I decided I didn't want a caps lock key, I never use it 
and it's never used in games so I decided to leave it out. I also decided to keep the escape key. 

On the right side of the board I kept the enter key as it's used a decent amount. 
I also needed a key for my function layer which would hold the F keys and other misc, which I put in the bottom right. 
My top right key is the Alt key since it's held for some commands. 

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
Normal keyboards have a row above the letters that house the numbers and most symbols. The Corne board only has 3 rows so it can't have a row for numbers
on the home layer. 
The solution for this is to have a layer key. My number layer key is located on the left thumb key in the left thumb cluster.

Originally I wanted a numpad on this layer but because of the corne board having 3 rows only this would leave the 0 key having to be off in a weird column. This would've also meant having the numpad be 
completely one hand dominant which I didn't really want. 
Instead I just decided on a straight 1-0 line on the homerow that way it's not only on the home row which are easier to hit but also spreads the numbers out on both hands. ]

The last bits of the number layer are the operation signs which are in the same spot they are in the symbol layer so it's easier to learn. 
Lastly period and comma are in the same spot as they are in the base layer. 

## Symbol Layer 
Normal keyboard will have most symbols layered with the number layer. However a Corne board only has 3 rows, so it has no number row. Since our number row is similar to how numbers are
on a default layer we could just have some symbols under those (either shift activated or on their own layer) however this would force us to fit the other symbols around them and will cause symbols 
to not be in efficient spots to hit. 

Although this layer is a combination of a bunch of different options it takes main inspiration from the BEAKL 15 symbol layout. (*NEEDS LINK*)

![[400px-Keyboard_effort_grid.png]]
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

Firstly I felt the need to have the function keys (F1-12) on this layer. Just like the number layer I took inspiration from this layout (https://configure.zsa.io/ergodox-ez/layouts/mnNX/latest/1)
and decided to have them in a straight line on the top row. Having them on the top row makes it more familiar to the standard layout and also ensures I have to go out of my way to hit them.
(Don't want to accidentally hit Alt F4)

Second I decided to have the arrow keys since they are useful if you want to be efficient and not take your hands off the keyboard for something like text editing. Since this keyboard will 
be used for programming and typing a decent amount I find this neccessary. I also decided to duplicate this setup on both halves so each hand has their own set of arrow keys. Since there are plenty of spare keys I don't think having duplicates is a big problem, and I can get rid of the set I find less useful later. 
*Where the keys are right now is actually not the best according to the BEAKL effort grid since 3 will have a value above 1. I can make it better by shifting it up, however the F keys are there so I might change the F keys to the bottom row so that the arrow keys will be in a spot that is better to press. Moving it up a row will make 3/4 keys have a value of .5 instead of 1+.*

I then have page up and page down keys near the arrow keys just in case I need it. Page up and down are similar to the arrow keys since they make navigating easier especially for webpages without using the mouse. 
Although not used a lot I still put in the print screen key since I do use it once in a while, the same goes for the Caps Lock key. I don't use them all the time so it's not in a higher layer but they are used so they should be in some layer. 


## OLED Screen
The corne v3 PCB allows for an OLED screen to be soldered on. Although this screen is small it can still be used to display some graphics. I'm sure there are good ideas out there that people use like displaying WPM or battery life if using a wireless board however I simply only wanted to display what layer I am on. 

I didn't have any ideas for fancy graphics so I chose a simple 3 letter + examples approach:
- Number layer has 'NUM 1234'
- Symbol layer has 'SYM !@#$'
- Function layer simple has 'FN'

To make these I made a file in inkscape with the size of the OLED I had which was 128x32 pixels. I when filled in the image with what I wanted mainly just inserting text and typing. After exporting the image I uploaded it to this website ([https://joric.github.io/qle/](https://javl.github.io/image2cpp/)) That turns it into the plain bytes for the image which you can copy and paste for your QMK file. 
**Make sure you match the orientation of your OLED. For you the preview photo might look how you want but might not work on the OLED, when I had problems with this I just rotated 180 degress (preview looked upside down) and it worked perfectly on the OLED.** 

I also decided to add a graphic that shows up if caps lock is in, I simply chose a small arrow design. *I did make each layer image with space so that the caps lock image could be overlayed on top (ex. if I have the symbol layer active but also caps lock) however they don't overlay by default so if I do want this I will have to tweak it so they do overlay* 

Lastly I changed the image that shows up when I am on the home layer, by default it shows 'corne' however I felt that I could add a little more. For my personal one I have 'corne' in simple text but I also added the name of my keymap 'Blithe' right under it, not only that but there was a little more space so I added a little logo that is the name of a friend group I am in. 

These are just what I wanted to have, however in the future if I get a good idea or want to take the time to learn how to make a nice animation I might add that. 

Only other change I made was that I change the timeout for the OLED to a couple seconds. I don't alwyas need to display what layer I am on, just the second or so that I change to it. This will also decrease the likelihood or buring the screen. 
