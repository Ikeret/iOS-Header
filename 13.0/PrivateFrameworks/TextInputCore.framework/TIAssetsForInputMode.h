//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject
{
    NSMutableDictionary *_assetsByInputModeLevel;
    NSString *_inputMode;
}

@property(readonly, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
- (void).cxx_destruct;
- (id)assetContentItemsMatching:(id)arg1;
- (void)removeAllInputModeLevels;
- (void)addAssetsForInputModeLevel:(id)arg1;
- (id)recursiveDescription;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;

@end

