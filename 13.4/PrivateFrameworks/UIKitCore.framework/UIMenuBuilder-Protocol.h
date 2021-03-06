//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIAction, UICommand, UIMenu, UIMenuSystem;

@protocol UIMenuBuilder
@property(readonly, nonatomic) UIMenuSystem *system;
- (void)removeMenuForIdentifier:(NSString *)arg1;
- (void)insertChildMenu:(UIMenu *)arg1 atEndOfMenuForIdentifier:(NSString *)arg2;
- (void)insertChildMenu:(UIMenu *)arg1 atStartOfMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 afterMenuForIdentifier:(NSString *)arg2;
- (void)insertSiblingMenu:(UIMenu *)arg1 beforeMenuForIdentifier:(NSString *)arg2;
- (void)replaceChildrenOfMenuForIdentifier:(NSString *)arg1 fromChildrenBlock:(NSArray * (^)(NSArray *))arg2;
- (void)replaceMenuForIdentifier:(NSString *)arg1 withMenu:(UIMenu *)arg2;
- (UICommand *)commandForAction:(SEL)arg1 propertyList:(id)arg2;
- (UIAction *)actionForIdentifier:(NSString *)arg1;
- (UIMenu *)menuForIdentifier:(NSString *)arg1;
@end

