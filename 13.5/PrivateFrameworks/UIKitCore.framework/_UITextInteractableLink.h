//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextInteractableItem.h>

@class LSAppLink, NSURL;

__attribute__((visibility("hidden")))
@interface _UITextInteractableLink : _UITextInteractableItem
{
    NSURL *_link;
    LSAppLink *_appLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LSAppLink *appLink; // @synthesize appLink=_appLink;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLink;

@end

