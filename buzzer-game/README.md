# Buzzer game

## Introduction

The buzzer game is a timing party game for multiple people played around a table.

## High level logic

When the game is powered on, it asks how many players there are, you can switch through the player count (2-8) using the buzzer button.

When the player count has been set, it starts a beeping countdown.

There are multiple beeps:

* High pitched beep
    * You hit it first, you can distribute the number of followed high-pitched beeps in the group repeating, (between 1 and MAX_PLAYERS)
* mid pitches beep
    * You hit it, you have to take sips (between 1 and 3)
    * the faster the fewer
* low pitches beep
    * What then? Ideas:
    * A challenge is shown on the LCD? Who does it can distribute the number of sips

Long press on the button starts the next round, again with a countdown.

Somtimes a light shines up on one side, and if the light is the same on the other side, if the button is pressed, the player can distribute, if the color was different, the presser has to drink.






## Hardware

* Small micro controller, i.e. ???
* small LCD screen
* 2x color LEDs
* Peeping speaker
* Jumper cables
* USB Cable for Power

## Development Setup guide

