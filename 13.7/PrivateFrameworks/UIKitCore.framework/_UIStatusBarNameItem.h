//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarNameItem : _UIStatusBarItem
{
    NSString *_nameEntryKey;
    _UIStatusBarStringView *_nameView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIStatusBarStringView *nameView; // @synthesize nameView=_nameView;
@property(readonly, nonatomic) NSString *nameEntryKey; // @synthesize nameEntryKey=_nameEntryKey;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_nameView;
- (id)dependentEntryKeys;

@end

