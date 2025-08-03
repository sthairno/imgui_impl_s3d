#pragma once
#include <imgui.h>

class DearImGuiAddon : public ::s3d::IAddon
{
public:

	bool LoadDefaultFont = true;

public:

	virtual bool init() override;

	virtual bool update() override;

	virtual void draw() const override;

	virtual ~DearImGuiAddon() override;

private:

	bool m_firstFrame = true;
};
