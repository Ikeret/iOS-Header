//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CAMExpandableMenuButton;

@protocol CAMExpandableMenuButtonDelegate
- (void)expandMenuButton:(CAMExpandableMenuButton *)arg1 animated:(_Bool)arg2;
- (struct CGRect)expandedFrameForMenuButton:(CAMExpandableMenuButton *)arg1;
- (void)collapseMenuButton:(CAMExpandableMenuButton *)arg1 animated:(_Bool)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(CAMExpandableMenuButton *)arg1;
@end

