#pragma once

#include <Graphics/RenderFlip.h>
#include <Physics/Point2D.h>

class Animation
{
public:
    Animation():
        m_row (0),
        m_frame (0),
        m_animSpeed (1.f),
        m_frameCount (1),
        m_height (0),
        m_width (0)
    {}


    void Update();
    void Draw (const phs::Point2D& pos, RenderFlip flip);
    void SetProps (std::string textureID, int row, int frame, float height, float width, float animSpeed);

private:
    int m_row;
    int m_frame;
    float m_animSpeed;
    int m_frameCount;
    float m_height;
    float m_width;
    std::string m_textureID;

};

