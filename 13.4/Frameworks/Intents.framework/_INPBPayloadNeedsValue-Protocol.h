//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBSelectionItem;

@protocol _INPBPayloadNeedsValue <NSObject>
+ (Class)promptItemsType;
@property(readonly, nonatomic) unsigned long long promptItemsCount;
@property(copy, nonatomic) NSArray *promptItems;
- (_INPBSelectionItem *)promptItemsAtIndex:(unsigned long long)arg1;
- (void)addPromptItems:(_INPBSelectionItem *)arg1;
- (void)clearPromptItems;
@end

