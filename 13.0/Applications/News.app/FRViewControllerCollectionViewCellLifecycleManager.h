//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPluginManager;

@interface FRViewControllerCollectionViewCellLifecycleManager : NSObject
{
    TSPluginManager *_pluginManager;
}

@property(retain, nonatomic) TSPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
- (void).cxx_destruct;
- (void)willEndDisplayingCell:(id)arg1;
- (void)willDisplayCell:(id)arg1 inParentViewController:(id)arg2;
- (void)configureCell:(id)arg1 withViewController:(id)arg2;

@end

