# Microdox thismatters layout

I am a programmer (python, django) who has become very accustom to using an ergodox over the last 6 years or so. I wanted to see if a split 30% layout would be prohibitive for general use. My preferred window manager (Awesome WM) facilitates a relatively mouse-less life by providing keyboard navigation between screens and windows, but it relies heavily on using modifier keys (the OS key in particular). Programming requires ready access to many symbols, and dealing with containers and commits means that I type hexdecimal pretty often too. Here I am outlining a series of layers that I feel addresses these concerns on only 36 keys. My experience with ergodox was that too many layers can be troublesome, especially if the layer shift keys are inconsistently placed. So it was relevant to this experiment to focus on keeping the layer shift keys centralized, and to have the active layer positively indicated by the underglow of the keyboard.

The (Microdox)[https://boardsource.xyz/store/5f2e7e4a2902de7151494f92] recently became available from boardsource which provides a perfect target platform for this experiment! The kit they sell includes optional RGB LEDs (and the board supports them) so this was the board for me.

## Features

### QWERTY layer

Not much to see here, pretty essential default layer provides a standard qwerty layout, however if the 'z' key is held it acts as a shift likewise the 'q' key acts like control when held. This allows for easy general use. Backspace and space are available on the innermost thumb cluster keys on the left and right, respectively. The outermost thumb cluster keys give access to the hex and symbols layers (left and right, respectively), while the middle thumb cluster keys access the left and right modifier layers. The QWERTY layer is indicated by a blue underglow.

### Hex layer (lower)

The hex layer is accessed by the left thumb holding or double-tapping the "Lower" key. The hex layer glows pink.

A numpad layer is fairly common on the layouts I've seen and used, but I cannot recall seeing a hexpad layer anywhere. Since I actually do find myself typing hex fairly often it seemed reasonable to forgo a traditional numpad. Instead I used the fifteen keys on the right hand to provide the numbers 1-f with 0 on the thumbcluster. I type numbers in a variety of contexts and they each use distinct punctuation to separate the digits. For instance, typing a datetime requires at least three symbols (e.g. 2020-08-16T06:03:56) while typing any maths requires having operators close at hand. To address this I used the left hand for a variety of symbols, I haven't fully decided on the exact layout of the symbols yet, but what I currently have seems fine. While on the hex layer pressing the "Raise" key will change layers to the function layer.


### Symbols layer (raise)

Access the symbols layer by holding or double-tapping the "Raise" key. Symbols are active when the board glows cyan.

The symbols layer gives access to all the symbols, importantly I wanted to have underscore and all the brackets really prominently on the hand opposite the "Raise" key. Pressing the "Lower" key while on the symbol layer also makes the function layer active. This symmetric arrangement permits the function layer to be accessed by touching the raise and lower keys simultaneously.

### modifiers layer (left and right)

Using a text editor _essentially requires_ having ready access to all modifier keys in conjunction with _any_ normal key, so a layer which features a modifier key covering any normal key presents a problem. My solution to this is to provide two separate modifier layers which each only consume one hand of the split layout, the other hand is completely transparent to allow access to whichever key from any of the QWERTY, hex, or symbols layer might be needed.

The left modifier layer is accessed by holding the "Mod" under your left thumb and will be signified with a red glow under your left hand (and right with right).

The placement of the modifiers is mirror imaged on either side. Caps lock is accessible on both sides, and when active one LED on each side will glow white.

### navigation layer

The navigation layer simply places vim style arrow keys under hjkl. Find it by tapping both of the "Mod" keys, and recognize it by the three top LEDs of the right half glowing green.

### function layer

The function layer provides access to the F-keys, print screen, num lock, and insert. It underglows white and can be accessed by hitting both the "Raise" and "Lower" keys.

## Build notes

The microdox features 6 RGB LED positions on each side of the board, in practice this means that there are _really_ 24 places where you can solder an LED. Of these 20 are practical, meaning that you can use the full amount that comes with the kit. Populate all 6 positions on the bottom of each side and the first 4 positions on the top side (they are numbered 1-4 in the direct center of the pads with a very small font, they start under the thumb cluster and go up to the index finger and along the topside of the home row) do not solder onto pad 5 as that sits directly under the microcontroller, and don't use pad 6 because pad 5 will not be populated and the LEDs require the series connection. Note that you will not be able to independently control the color of the LEDs on the top side of the board, they will directly mirror the state of the LED in the same position on the underside of the board.

## Initial takeaways

I had a lot of fun building this kit, and only a few problems with getting the everything working. The folks on the boardsource discord server were more than helpful in getting my board working 100%. This is my first experience with QMK; coming from the ergodox firmware it is something of an improvement.

The "smoke tactile" MX switches that shipped with the kit are, as advertised, quite smooth and enjoyable to type on. The silver TRRS cable included with the kit is, by far, the nicest cable I've seen for the purpose; it is a tremendous addition to the kit.

The boards are compact, but the case is surprisingly heavy for its size. The included rubber feet do a great job of keeping them in place. My ergodox now feel like aircraft carriers in comparison.

The one annoyance is the usb cable placement. The cable enters in under the palm of either hand, so it necessarily takes up some space around the board, this can be troublesome if you have a toddler that usually hangs out on your left side and if you mouse on the right. Thankfully I mouse in the middle so the cable can go right and the left can be free for toy trucks.

Another slight criticism is the placement of the thumb cluster. My ideal would put the thumb cluster outboard by another half-switch width, but since the idea behind this project was to be compact this, and the microcontroller placement, are completely acceptable. Other, bigger, kits have more optimal placement of the thumb cluster and microcontroller, but those are actually _much_ bigger boards and wouldn't scratch the itch I'm trying to scratch.

I wrote this review and did much of the coding required to configure my layers using the board, so I have already gotten to explore the board in its intended use. I am still considerably slower at navigating my window manager, but it doesn't seem like my typing speed has been impacted much (save for quotation marks). I think that to approach the navigation speed I've become accustom to on ergodox I'll need to create a dedicated layer for Awesome WM, in time I think I'll get there.

## Future possibilities

I would like to try tenting these little guys so that they might be a little more ergonomic.