# 🗺️ UE5 Game Map Plugin (Supports multiplayer or Single player)

---

## 🌀 Description:

[![Game Map System Demo](https://github.com/MatinEsmaeili00/UE5-MultiplayerRacingGames-Plugins/blob/main/Docs/GameMapSystem/Game%20Map%20System%20-%20Demo.gif?raw=true)](https://youtu.be/DU8-FpL0MKw)


[▶️ Watch the full video on YouTube](https://youtu.be/DU8-FpL0MKw)

**A powerful and customizable in-game minimap plugin for Unreal Engine 5 racing games — built for both single-player and multiplayer. It features real-time player tracking, dynamic icons, seamless 3D-to-2D mapping, and easy UI integration.**

---
<br>

## 🎮 Features:



### 🧭 3D to 2D Auto-Mapping

[![3Dto2D](https://github.com/MatinEsmaeili00/UE5-MultiplayerRacingGames-Plugins/blob/main/Docs/GameMapSystem/3Dto2D.gif?raw=true)](https://youtu.be/ypkKo_4y0no)

[▶️ Watch on YouTube](https://youtu.be/ypkKo_4y0no)

The minimap automatically links player locations from the 3D world to positions in the 2D UI using a customizable **3D volume box** placed in your level.

- You can also **capture an overhead image** of the area covered by this volume  
  → Just press a Capture Map Snapshot button to generate a snapshot, which is then turned into a **texture**

- That texture can be used as a **base map image** in your minimap widget


---


<br>


### 📸 Overhead Image Capture (Map Basic Texture):

[![Overhead Image Capture](https://github.com/MatinEsmaeili00/UE5-MultiplayerRacingGames-Plugins/blob/main/Docs/GameMapSystem/OverheadImgCapture.gif?raw=true)](https://youtu.be/9EfhXmGWDPo)

[▶️ Watch on YouTube](https://youtu.be/9EfhXmGWDPo)

The system includes a **capture tool** that automatically aligns scene captures to the area covered by the minimap’s 3D volume. It gives you a quick top-down texture — perfect when you're frequently changing or updating your map.

- You can choose the **texture compression format** from a dropdown menu before capturing
- You can either **use a custom path** to save the captured texture, or let the tool automatically save it in a default folder inside the plugin

> [!NOTE]
>> You can always change the texture’s compression settings later in Unreal’s **Texture Editor** — the tool just gives you **quick access** upfront
---
<br>


### 🎨 Editable & Expandable UI Widget

[![Editable UI Widget](https://github.com/MatinEsmaeili00/UE5-MultiplayerRacingGames-Plugins/blob/main/Docs/GameMapSystem/EditableUIWidget.gif?raw=true)](https://youtu.be/lsbPyZzvVH8)

[▶️ Watch on YouTube](https://youtu.be/lsbPyZzvVH8)


Customize your minimap directly in the UMG editor:

- Maintains the correct aspect ratio of the 3D map automatically
- Scale the map freely or use the built-in dropdown slider
- Move and relocate the map bu **selecting and drag the map around**

> [!WARNING]
>> - For **free resizing**, select the image component and scale to your desired size
>> - For **relocation**, select and drag any map-related component (you don't need to select any specific component)
---
<br>

### 🧩 Icon Customization

[![Icon Customization](https://github.com/MatinEsmaeili00/UE5-MultiplayerRacingGames-Plugins/blob/main/Docs/GameMapSystem/IconCustomization.gif?raw=true)](https://youtu.be/83GG9GaCmN0)

[▶️ Watch on YouTube](https://youtu.be/83GG9GaCmN0)

Customize your **player** and **enemy** icons with full flexibility:

- The system uses **separate user widgets** for player and enemy icons  
  → This allows you to assign different **textures**, **colors**, or even animated elements using the full power of the **Widget Editor**

- Icon **size is preserved**  
  → The system automatically maintains the icon size you set in each widget.

> [!WARNING]
>> To ensure correct positioning on the map:
>> - It is better to **center the icon** within its **canvas panel top left corner** inside the widget editor
>> - This aligns the icon’s center with the actual 3D player location on the map
---
<br>

### 🛠️ Optimization & System Update Rate Customization

[![Optimization](https://github.com/MatinEsmaeili00/UE5-MultiplayerRacingGames-Plugins/blob/main/Docs/GameMapSystem/Optimization.gif?raw=true)](https://youtu.be/07-XGcE6n-k)

[▶️ Watch on YouTube](https://youtu.be/07-XGcE6n-k)

One of the reasons this system was designed to use a **static map texture** with a **player tracking system** (instead of a live render capture) is to keep it **lightweight and performance-friendly**.

- You can **increase or decrease** how often the system updates  
  → Useful for making it feel smoother or saving a bit of performance when needed

---

> [!TIP]  
> Tested in **Unreal Engine 5.5.4**. All plugins are **component‑based**, so you can easily bolt them onto existing code, and each ships with a small **demo map** that works in both single‑player and multiplayer.



