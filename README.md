<p align="center"><img src="https://i.imgur.com/7YOOfqF.png" align="center" alt="Zodiak" width="250" align="center"></p>

# Zodiak
**Zodiak** is a full kernel driver cheat for CS 1.6. The cheat is designed to leave zero traces in the system to avoid detection, so there are no config files or anything else that could leave a trace.

The ESP is implemented by exporting GDI functions, allowing it to work in CS 1.6. The aimbot is created by exploiting the MouHID driver and callling own `MouseClassServiceCallback`.

In the end, it’s similar to ekknod's EC cheat but adapted for CS 1.6, because it uses the same techniques. I hope ekknod won’t mind :3

## General
- Written in C and assembly
- Automatic offsets detection
- Thread context spoofing
- Operates in a single thread

## Features
- **Aimbot** (calling "own" MouseClassServiceCallback)
- **ESP** (GDI kernel drawing without hooks)
- **NoRecoil** (Beta version)

## Usage
Since this cheat is a kernel driver, you'll need to load it. I recommend using [kdmapper](https://github.com/TheCruZ/kdmapper) as it very easy to use. If you prefer, you can also load it just in test mode.
Check out [USAGE.md](USAGE.md) for detailed instruction.

### Default Keybinds
- **F6**: Toggle Aimbot
- **F7**: Toggle ESP
- **F8**: Toggle "Only Enemies" Mode
- **Home**: Adjust FOV+  (Default: 100, once key press plus 25)
- **End**: Adjust FOV- (Minumum: 25, once key press minus 25)
- **PgUp**: Adjust Smooth+ (Default: 4, once key press plus 1)
- **PgDown**: Adjust Smooth- (Minumum: 1, once key press minus 1)
- **Numpad -**: Aim Head
- **Numpad +**: Aim Chest


## Credits
- Developer Page: https://github.com/3a1/Zodiak
- [Ekknod](https://github.com/ekknod) for the simple and effective GDI implementation, mouse callback trick, and overall for all his publicly available projects, especially the EC project, which I believe has one of the best structures I've seen in external cheats.
- [Unmaewei](https://github.com/unmaewei) for his Full Kernel Driver Cheat. I borrowed some general driver operations from there.
