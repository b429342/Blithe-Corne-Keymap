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

On the right side of the board I 

### Thumb Cluster 
One of the key features of the crkbd is the 2 clusters of 3 keys that your thumbs can hit. These are for the most used and most important keys. 

<img width="681" height="227" alt="image" src="https://github.com/user-attachments/assets/38f87fc2-bca8-4ac1-8120-45f74e2dac78" />

## Number Layer
Normal keyboards have a row above the letters that house the numbers and most symbols. The Corne board only has 3 rows so it can't have a row for numbers
on the home layer. 
The solution for this is to have a layer key. 

## Symbol Layer 
Normal keyboard will have most symbols layered with the number layer. However a Corne board only has 3 rows, so it has no number row. 
