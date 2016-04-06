<GameFile>
  <PropertyGroup Name="BettleReadyUI" Type="Layer" ID="8dd4bbe7-e119-43e7-8d7c-d7f0c7deb5ef" Version="3.10.0.0" />
  <Content ctype="GameProjectContent">
    <Content>
      <Animation Duration="120" Speed="1.0000">
        <Timeline ActionTag="635103060" Property="Position">
          <PointFrame FrameIndex="60" X="307.2070" Y="326.1439">
            <EasingData Type="0" />
          </PointFrame>
          <PointFrame FrameIndex="120" X="793.3376" Y="254.9425">
            <EasingData Type="0" />
          </PointFrame>
        </Timeline>
        <Timeline ActionTag="635103060" Property="Scale">
          <ScaleFrame FrameIndex="0" X="3.2609" Y="3.2609">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="60" X="3.2609" Y="3.2609">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="120" X="3.2609" Y="3.2609">
            <EasingData Type="0" />
          </ScaleFrame>
        </Timeline>
        <Timeline ActionTag="635103060" Property="RotationSkew">
          <ScaleFrame FrameIndex="0" X="0.0000" Y="0.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="60" X="360.0000" Y="360.0000">
            <EasingData Type="0" />
          </ScaleFrame>
          <ScaleFrame FrameIndex="120" X="360.0000" Y="360.0000">
            <EasingData Type="0" />
          </ScaleFrame>
        </Timeline>
      </Animation>
      <AnimationList>
        <AnimationInfo Name="SpacialAnation" StartIndex="0" EndIndex="60">
          <RenderColor A="150" R="34" G="139" B="34" />
        </AnimationInfo>
        <AnimationInfo Name="MoveAni" StartIndex="60" EndIndex="120">
          <RenderColor A="150" R="147" G="112" B="219" />
        </AnimationInfo>
      </AnimationList>
      <ObjectData Name="Layer" Tag="15" ctype="GameLayerObjectData">
        <Size X="960.0000" Y="640.0000" />
        <Children>
          <AbstractNodeData Name="Button_1" ActionTag="635103060" Tag="2" IconVisible="False" LeftMargin="284.2070" RightMargin="629.7930" TopMargin="295.8561" BottomMargin="308.1439" TouchEnable="True" FontSize="14" ButtonText="Button" Scale9Enable="True" LeftEage="15" RightEage="15" TopEage="11" BottomEage="11" Scale9OriginX="15" Scale9OriginY="11" Scale9Width="16" Scale9Height="14" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="ButtonObjectData">
            <Size X="46.0000" Y="36.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="307.2070" Y="326.1439" />
            <Scale ScaleX="3.2609" ScaleY="3.2609" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.3200" Y="0.5096" />
            <PreSize X="0.0479" Y="0.0562" />
            <TextColor A="255" R="65" G="65" B="70" />
            <DisabledFileData Type="Default" Path="Default/Button_Disable.png" Plist="" />
            <PressedFileData Type="Default" Path="Default/Button_Press.png" Plist="" />
            <NormalFileData Type="Default" Path="Default/Button_Normal.png" Plist="" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="Image_2" ActionTag="-280553190" Tag="4" IconVisible="False" LeftMargin="139.1478" RightMargin="774.8522" TopMargin="115.6891" BottomMargin="478.3109" Scale9Width="46" Scale9Height="46" ctype="ImageViewObjectData">
            <Size X="46.0000" Y="46.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="162.1478" Y="501.3109" />
            <Scale ScaleX="3.1350" ScaleY="3.0816" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.1689" Y="0.7833" />
            <PreSize X="0.0479" Y="0.0719" />
            <FileData Type="Default" Path="Default/ImageFile.png" Plist="" />
          </AbstractNodeData>
          <AbstractNodeData Name="CheckBox_1" ActionTag="1267753020" Tag="5" IconVisible="False" LeftMargin="499.3835" RightMargin="420.6165" TopMargin="70.8116" BottomMargin="529.1884" TouchEnable="True" CheckedState="True" ctype="CheckBoxObjectData">
            <Size X="40.0000" Y="40.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="519.3835" Y="549.1884" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.5410" Y="0.8581" />
            <PreSize X="0.0417" Y="0.0625" />
            <NormalBackFileData Type="Default" Path="Default/CheckBox_Normal.png" Plist="" />
            <PressedBackFileData Type="Default" Path="Default/CheckBox_Press.png" Plist="" />
            <DisableBackFileData Type="Default" Path="Default/CheckBox_Disable.png" Plist="" />
            <NodeNormalFileData Type="Default" Path="Default/CheckBoxNode_Normal.png" Plist="" />
            <NodeDisableFileData Type="Default" Path="Default/CheckBoxNode_Disable.png" Plist="" />
          </AbstractNodeData>
          <AbstractNodeData Name="Panel_1" ActionTag="-47514629" Tag="6" IconVisible="False" LeftMargin="581.9903" RightMargin="178.0097" TopMargin="61.4495" BottomMargin="378.5505" TouchEnable="True" ClipAble="False" BackColorAlpha="102" ComboBoxIndex="1" ColorAngle="90.0000" ctype="PanelObjectData">
            <Size X="200.0000" Y="200.0000" />
            <Children>
              <AbstractNodeData Name="Slider_1" ActionTag="-1875028351" Tag="7" IconVisible="False" LeftMargin="4.3470" RightMargin="-4.3470" TopMargin="98.4742" BottomMargin="87.5258" TouchEnable="True" PercentInfo="50" ctype="SliderObjectData">
                <Size X="200.0000" Y="14.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="104.3470" Y="94.5258" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.5217" Y="0.4726" />
                <PreSize X="1.0000" Y="0.0700" />
                <BackGroundData Type="Default" Path="Default/Slider_Back.png" Plist="" />
                <ProgressBarData Type="Default" Path="Default/Slider_PressBar.png" Plist="" />
                <BallNormalData Type="Default" Path="Default/SliderNode_Normal.png" Plist="" />
                <BallPressedData Type="Default" Path="Default/SliderNode_Press.png" Plist="" />
                <BallDisabledData Type="Default" Path="Default/SliderNode_Disable.png" Plist="" />
              </AbstractNodeData>
            </Children>
            <AnchorPoint />
            <Position X="581.9903" Y="378.5505" />
            <Scale ScaleX="1.5095" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.6062" Y="0.5915" />
            <PreSize X="0.2083" Y="0.3125" />
            <SingleColor A="255" R="150" G="200" B="255" />
            <FirstColor A="255" R="150" G="200" B="255" />
            <EndColor A="255" R="255" G="255" B="255" />
            <ColorVector ScaleY="1.0000" />
          </AbstractNodeData>
          <AbstractNodeData Name="Text_1" ActionTag="-689019365" Tag="9" IconVisible="False" LeftMargin="318.7039" RightMargin="549.2960" TopMargin="143.4202" BottomMargin="476.5798" FontSize="20" LabelText="Text Label" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
            <Size X="92.0000" Y="20.0000" />
            <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
            <Position X="364.7039" Y="486.5798" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.3799" Y="0.7603" />
            <PreSize X="0.0958" Y="0.0313" />
            <OutlineColor A="255" R="255" G="0" B="0" />
            <ShadowColor A="255" R="110" G="110" B="110" />
          </AbstractNodeData>
          <AbstractNodeData Name="ListView_1" ActionTag="1860503401" Tag="10" IconVisible="False" LeftMargin="43.0710" RightMargin="716.9290" TopMargin="322.9297" BottomMargin="117.0703" TouchEnable="True" ClipAble="False" BackColorAlpha="102" ComboBoxIndex="1" ColorAngle="90.0000" ScrollDirectionType="0" DirectionType="Vertical" ctype="ListViewObjectData">
            <Size X="200.0000" Y="200.0000" />
            <Children>
              <AbstractNodeData Name="Text_1_0" ActionTag="1136938198" Tag="11" IconVisible="False" RightMargin="108.0000" BottomMargin="180.0000" FontSize="20" LabelText="Text Label" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
                <Size X="92.0000" Y="20.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="46.0000" Y="190.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.2300" Y="0.9500" />
                <PreSize X="0.4600" Y="0.1000" />
                <OutlineColor A="255" R="255" G="0" B="0" />
                <ShadowColor A="255" R="110" G="110" B="110" />
              </AbstractNodeData>
              <AbstractNodeData Name="Text_3" ActionTag="-680704444" ZOrder="1" Tag="14" IconVisible="False" RightMargin="108.0000" TopMargin="20.0000" BottomMargin="160.0000" FontSize="20" LabelText="Text Label" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
                <Size X="92.0000" Y="20.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="46.0000" Y="170.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.2300" Y="0.8500" />
                <PreSize X="0.4600" Y="0.1000" />
                <OutlineColor A="255" R="255" G="0" B="0" />
                <ShadowColor A="255" R="110" G="110" B="110" />
              </AbstractNodeData>
              <AbstractNodeData Name="Text_4" ActionTag="1767550487" ZOrder="2" Tag="15" IconVisible="False" RightMargin="108.0000" TopMargin="40.0000" BottomMargin="140.0000" FontSize="20" LabelText="Text Label" ShadowOffsetX="2.0000" ShadowOffsetY="-2.0000" ctype="TextObjectData">
                <Size X="92.0000" Y="20.0000" />
                <AnchorPoint ScaleX="0.5000" ScaleY="0.5000" />
                <Position X="46.0000" Y="150.0000" />
                <Scale ScaleX="1.0000" ScaleY="1.0000" />
                <CColor A="255" R="255" G="255" B="255" />
                <PrePosition X="0.2300" Y="0.7500" />
                <PreSize X="0.4600" Y="0.1000" />
                <OutlineColor A="255" R="255" G="0" B="0" />
                <ShadowColor A="255" R="110" G="110" B="110" />
              </AbstractNodeData>
            </Children>
            <AnchorPoint />
            <Position X="43.0710" Y="117.0703" />
            <Scale ScaleX="1.0000" ScaleY="1.0000" />
            <CColor A="255" R="255" G="255" B="255" />
            <PrePosition X="0.0449" Y="0.1829" />
            <PreSize X="0.2083" Y="0.3125" />
            <SingleColor A="255" R="150" G="150" B="255" />
            <FirstColor A="255" R="150" G="150" B="255" />
            <EndColor A="255" R="255" G="255" B="255" />
            <ColorVector ScaleY="1.0000" />
          </AbstractNodeData>
        </Children>
      </ObjectData>
    </Content>
  </Content>
</GameFile>