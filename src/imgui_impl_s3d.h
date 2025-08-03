#pragma once
struct imgui_impl_s3d;

struct ImGuiImpls3dConfig
{
	bool loadDefaultFont = true; // Load default font at initialization
};

IMGUI_IMPL_API bool ImGui_Impls3d_Init(ImGuiImpls3dConfig config = {});
IMGUI_IMPL_API void ImGui_Impls3d_Shutdown();
IMGUI_IMPL_API void ImGui_Impls3d_NewFrame();
IMGUI_IMPL_API void ImGui_Impls3d_RenderDrawData(ImDrawData* data);

IMGUI_IMPL_API ImTextureID ImGui_Impls3d_RegisterTexture(Texture& tex);
IMGUI_IMPL_API void ImGui_Impls3d_UnregisterTexture(Texture& tex);
IMGUI_IMPL_API void ImGui_Impls3d_UnregisterTexture(ImTextureID tex);
IMGUI_IMPL_API Texture ImGui_Impls3d_GetTexture(ImTextureID id);
