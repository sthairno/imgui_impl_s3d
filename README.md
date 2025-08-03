# imgui_impl_s3d

This is the backend for using Dear ImGui on OpenSiv3D project.

OpenSiv3DプロジェクトでDear ImGuiを使用するためのバックエンドです。

## How to use / 使用方法

1. Copy all files in `src/` directory into your project
   
   `src/` ディレクトリ内の全ファイルをプロジェクトにコピー

2. Add the addon to Main.cpp as shown below
   
   下記のようにアドオンをMain.cppに追加
   ```diff
     #include <Siv3D.hpp>
   + #include "DearImGuiAddon.hpp"

     void Main()
     {
   +     Addon::Register<DearImGuiAddon>(U"ImGui");

         while (System::Update())
         { 
            ...
         }
     }
   ```

3. Declare windows inside the while loop
   
   whileループ内でウィンドウを宣言
   ```diff
     #include <Siv3D.hpp>
     #include "DearImGuiAddon.hpp"

     void Main()
     {
        Addon::Register<DearImGuiAddon>(U"ImGui");

         while (System::Update())
         { 
   +        ImGui::ShowDemoWindow(); // Demo Window
   
            ...
         }
     }
   ```

## Supported Versions / 対応バージョン

- Dear ImGui v1.92 or higher / Dear ImGui v1.92以降
- OpenSiv3D v0.6.16 or higher / OpenSiv3D v0.6.16以降

> [!NOTE]
> 
> For Dear ImGui versions prior to v1.90, please use this version:
> 
> Dear ImGui v1.90以前のバージョンはこちらを利用してください:
> 
> https://gist.github.com/sthairno/887740c5ec1a8857e66e30ba179fdc3b
