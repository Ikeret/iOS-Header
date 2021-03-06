//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardFoundation/SBFProceduralWallpaper-Protocol.h>

@class NSString;
@protocol SBFProceduralWallpaperDelegate;

@interface SBFProceduralWallpaper : UIView <SBFProceduralWallpaper>
{
}

+ (id)identifier;
- (id)view;
- (void)setAnimating:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SBFProceduralWallpaperDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

