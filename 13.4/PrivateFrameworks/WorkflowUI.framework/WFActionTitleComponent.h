//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFActionTitleComponent : CKCompositeComponent
{
    CKComponent *_leadingComponent;
    CKTypedComponentAction_789af415 _action;
    _Bool _enabled;
}

+ (id)newWithIcon:(id)arg1 attributedTitle:(id)arg2 enabled:(_Bool)arg3 action:(CKTypedComponentAction_789af415)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)componentTapped:(id)arg1;

@end

