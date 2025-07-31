# Blithe-Corne-Keymap
My custom QMK keymap for the Corne keyboard by Foostan. Canary Matrix layout with a BEAKL-15 inspired symbol layer. Also has some custom OLED design for each layer. 

Skip To: 
(What Keyboard Layout It Uses (Canary) [#canary-layout]
() [#] 

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

The BEAKL 15 layout has a 3x3 backbone home block like a numpad, this makes it good for opening and closing symbols like ()[]{}<>. 
