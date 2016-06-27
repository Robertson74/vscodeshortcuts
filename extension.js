// The module 'vscode' contains the VS Code extensibility API
// Import the module and reference it with the alias vscode in your code below
var vscode = require('vscode');

// this method is called when your extension is activated
// your extension is activated the very first time the command is executed
function activate(context) {

    // Use the console to output diagnostic information (console.log) and errors (console.error)
    // This line of code will only be executed once when your extension is activated

    // The command has been defined in the package.json file
    // Now provide the implementation of the command with  registerCommand
    // The commandId parameter must match the command field in package.json
    var cursorUpMultiple = vscode.commands.registerCommand('extension.cursorUpMultiple', function () {
        vscode.commands.executeCommand('cursorUp');
        vscode.commands.executeCommand('cursorUp');
        vscode.commands.executeCommand('cursorUp');
    });
    var cursorUpMultipleSelect = vscode.commands.registerCommand('extension.cursorUpMultipleSelect', function () {
        vscode.commands.executeCommand('cursorUpSelect');
        vscode.commands.executeCommand('cursorUpSelect');
        vscode.commands.executeCommand('cursorUpSelect');
    });    
    var cursorDownMultiple = vscode.commands.registerCommand('extension.cursorDownMultiple', function () {
        vscode.commands.executeCommand('cursorDown');
        vscode.commands.executeCommand('cursorDown');
        vscode.commands.executeCommand('cursorDown');
    });
    var cursorDownMultipleSelect = vscode.commands.registerCommand('extension.cursorDownMultipleSelect', function () {
        vscode.commands.executeCommand('cursorDownSelect');
        vscode.commands.executeCommand('cursorDownSelect');
        vscode.commands.executeCommand('cursorDownSelect');
    });    
    var cursorRightMultiple = vscode.commands.registerCommand('extension.cursorRightMultiple', function () {
        for(var i = 0;i < 10; i++) {
            vscode.commands.executeCommand('cursorRight');
        }
    });
    var cursorLeftMultiple = vscode.commands.registerCommand('extension.cursorLeftMultiple', function () {
        for(var i = 0;i < 10; i++) {
            vscode.commands.executeCommand('cursorLeft');
        }
    });    
    var cursorRightMultipleSelect = vscode.commands.registerCommand('extension.cursorRightMultipleSelect', function () {
        for(var i = 0;i < 10; i++) {
            vscode.commands.executeCommand('cursorRightSelect');
        }
    });
    var cursorLeftMultipleSelect = vscode.commands.registerCommand('extension.cursorLeftMultipleSelect', function () {
        for(var i = 0;i < 10; i++) {
            vscode.commands.executeCommand('cursorLeftSelect');
        }
    });        
    var cursorRightLarge = vscode.commands.registerCommand('extension.cursorRightLarge', function () {
        for(var i = 0;i < 30; i++) {
            vscode.commands.executeCommand('cursorRight');
        }
    });
    var cursorLeftLarge = vscode.commands.registerCommand('extension.cursorLeftLarge', function () {
        for(var i = 0;i < 30; i++) {
            vscode.commands.executeCommand('cursorLeft');
        }
    });        
    var cursorUpHalf = vscode.commands.registerCommand('extension.cursorUpHalf', function () {
        for(var i = 0;i < 15; i++) {
            vscode.commands.executeCommand('cursorUp');
        }
    });        
    var cursorDownHalf = vscode.commands.registerCommand('extension.cursorDownHalf', function () {
        for(var i = 0;i < 15; i++) {
            vscode.commands.executeCommand('cursorDown');
        }
    });            
    var cursorRightLargeSelect = vscode.commands.registerCommand('extension.cursorRightLargeSelect', function () {
        for(var i = 0;i < 30; i++) {
            vscode.commands.executeCommand('cursorRightSelect');
        }
    });
    var cursorLeftLargeSelect = vscode.commands.registerCommand('extension.cursorLeftLargeSelect', function () {
        for(var i = 0;i < 30; i++) {
            vscode.commands.executeCommand('cursorLeftSelect');
        }
    });        
    var cursorUpHalfSelect = vscode.commands.registerCommand('extension.cursorUpHalfSelect', function () {
        for(var i = 0;i < 15; i++) {
            vscode.commands.executeCommand('cursorUpSelect');
        }
    });        
    var cursorDownHalfSelect = vscode.commands.registerCommand('extension.cursorDownHalfSelect', function () {
        for(var i = 0;i < 15; i++) {
            vscode.commands.executeCommand('cursorDownSelect');
        }
    });                
    context.subscriptions.push(cursorUpMultiple);
    context.subscriptions.push(cursorUpMultipleSelect);
    context.subscriptions.push(cursorDownMultiple);
    context.subscriptions.push(cursorDownMultipleSelect);
    context.subscriptions.push(cursorRightMultiple);
    context.subscriptions.push(cursorRightLarge);
    context.subscriptions.push(cursorRightLargeSelect);
    context.subscriptions.push(cursorLeftMultiple);
    context.subscriptions.push(cursorLeftLarge);
    context.subscriptions.push(cursorLeftLargeSelect);
    context.subscriptions.push(cursorUpHalf);
    context.subscriptions.push(cursorUpHalfSelect);
    context.subscriptions.push(cursorDownHalf);
    context.subscriptions.push(cursorDownHalfSelect);
    context.subscriptions.push(cursorLeftMultipleSelect);
    context.subscriptions.push(cursorRightMultipleSelect);
}
exports.activate = activate;

// this method is called when your extension is deactivated
function deactivate() {
}
exports.deactivate = deactivate;