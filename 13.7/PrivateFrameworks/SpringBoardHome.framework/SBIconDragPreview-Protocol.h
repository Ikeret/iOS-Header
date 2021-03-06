//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SBIcon;

@protocol SBIconDragPreview
@property(retain, nonatomic) SBIcon *icon;
@property(nonatomic) _Bool iconIsEditing;
@property(nonatomic) double iconContentScale;
@property(nonatomic) _Bool iconAllowsLabelArea;
@property(nonatomic, getter=isFlocked) _Bool flocked;
@property(nonatomic) unsigned long long dragState;
- (void)dropDestinationAnimationCompleted;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
@end

