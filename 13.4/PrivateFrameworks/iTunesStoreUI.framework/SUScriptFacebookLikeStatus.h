//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSDictionary;

@interface SUScriptFacebookLikeStatus : SUScriptObject
{
    NSDictionary *_dictionary;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly, getter=isLikedByMe) id likedByMe;
@property(readonly) unsigned long long globalLikeCount;
@property(readonly) NSArray *friends;
@property(readonly) unsigned long long friendLikeCount;
- (id)_className;
- (void)dealloc;
- (id)initWithLikeStatusDictionary:(id)arg1;

@end

