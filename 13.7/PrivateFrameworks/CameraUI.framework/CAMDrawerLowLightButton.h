//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlDrawerCustomButton.h>

@interface CAMDrawerLowLightButton : CAMControlDrawerCustomButton
{
    _Bool _on;
    _Bool _disabled;
}

@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
- (_Bool)adjustsImageWhenDisabled;
- (_Bool)shouldUseActiveTintForCurrentState;
- (id)imageNameForCurrentState;
- (long long)controlType;

@end

